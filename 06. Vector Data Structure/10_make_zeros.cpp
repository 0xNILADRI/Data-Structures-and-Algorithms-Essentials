#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> &arr){
    vector<int> r,c;
    int n = arr.size(), m = arr[0].size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                r.push_back(i); c.push_back(j);
            }
        }
    }
    
    for(auto x : r){
        for(int i=0; i<n; i++){
            arr[x][i] = 0;
        }
    }
    for(auto x : c){
        for(int i=0; i<n; i++){
            arr[i][x] = 0;
        }
    }
    
    return arr;
}

int main(){
    vector<vector<int>> arr = {{5,4,3,9},{2,0,7,6},{1,3,4,0},{9,8,3,4}};
    makeZeroes(arr);
    cout<<"[";
    for(int i =0; i<arr.size(); ++i){
        cout<<"[";
        for(int j=0; j<arr[i].size(); ++j){
            cout<<arr[i][j];
            if(j<arr[i].size()-1)
                cout<<",";
        }
        cout<<"]";
    }
    cout<<"]"<<endl; 
    return 0;
}