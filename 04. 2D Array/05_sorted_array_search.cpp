#include<bits/stdc++.h>
using namespace std;
 
 pair<int,int> staircaseSearch(int m, int n, vector<vector<int>> arr, int key){
    pair<int,int> res;

    // key is smaller than minimum element or greater then the maximum element; return -1,-1
    if(key<arr[0][0] or key>arr[n-1][m-1]){
        return {-1,-1};
    }
    
    // staircase search
    int i=n-1, j=0;    // starting from right bottom
    
    while(i>=0 and j<=m-1){
        if(arr[i][j]==key){
            return {i,j};
        }
        else if(arr[i][j]<key){
            j++;
        }
        else{
            i--;
        }
    }

    return {-1,-1};
}

int main(){

    // 2D Array in ascending order both row and column
    vector<vector<int>> arr = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int n=4, m=4;

    // store result
    pair<int,int> result = staircaseSearch(n,m,arr,31);
    // print result
    if(result.first!=-1)
        cout<<"Found at index : "<<result.first<<","<<result.second<<endl;
    else
        cout<<"Not found"<<endl;

    return 0;
}