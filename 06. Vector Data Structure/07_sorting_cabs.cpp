#include<bits/stdc++.h>
using namespace std;

bool distanceCompare(pair<int,int> c1, pair<int,int>c2){
    float d1 = sqrt((c1.first*c1.first) + (c1.second*c1.second));
    float d2 = sqrt((c2.first*c2.first) + (c2.second*c2.second));
    return d1 < d2;
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> &v){
    sort(v.begin(), v.end(),distanceCompare);
    return v;
}

int main(){
    vector<pair<int,int>> loc = {{2,3},{1,2},{3,4},{2,4},{1,4}};
    sortCabs(loc);
    for(auto s : loc){
        cout<<"("<<s.first<<","<<s.second<<")"<<endl;
    }
    return 0;
}