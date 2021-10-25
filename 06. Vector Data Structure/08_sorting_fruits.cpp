#include<bits/stdc++.h>
using namespace std;

bool valueComparator(pair<string,int> i1, pair<string,int> i2){
    return i1.second < i2.second;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> &v, string S){
    if(S!="name")
        sort(v.begin(), v.end(),valueComparator);
    else
        sort(v.begin(), v.end());
    return v;
}

int main(){
    vector<pair<string,int>> fruits = {{"Mango",100},{"Guava",70},{"Grapes",40},{"Apple",60},{"Banana",30}};
    string S = "price"; // price or name
    sortFruits(fruits,S);

    // print output
    for(auto s : fruits){
        cout<<"("<<s.first<<","<<s.second<<")"<<endl;
    }
    return 0;
}