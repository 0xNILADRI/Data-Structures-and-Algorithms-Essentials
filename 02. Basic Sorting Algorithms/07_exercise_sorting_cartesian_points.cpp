#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(),v.end());
    return v;
    
}

int main(){
    vector <pair<int,int>> arr = {{3,4},{2,3},{3,7},{1,5},{3,4}};
    vector <pair<int,int>> arr1 = sortCartesian(arr);
    for(int i=0; i<arr1.size(); i++){
        cout<<"("<<arr1[i].first<<","<<arr1[i].second<<")"<<" , ";
    }
    return 0;
}