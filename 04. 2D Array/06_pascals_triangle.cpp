#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n){
    vector<vector<int>> result;
    for(int i=0; i<n; i++){
        result.push_back({});
        for(int j=0; j<=i; j++){
            if(j==0 || i==j){
                result[i].emplace_back(1);
            }
            else{
                result[i].emplace_back(result[i-1][j-1] + result[i-1][j]);
            }
        }
    }
    
    return result;
}

int main(){
    vector<vector<int>> arr = printPascal(5);
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}