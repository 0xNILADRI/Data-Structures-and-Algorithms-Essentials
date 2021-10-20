#include<bits/stdc++.h>
using namespace std;
 
 vector<int> wavePrint(int m, int n, vector<vector<int>> arr){
    vector<int> res;
    int startRow=0, endRow=n-1, startCol=0, endCol=m-1;
    bool clockwise = true;
    while(endCol>=startCol){
        
        // end col ; downwards
        if(clockwise){
            for(int row=startRow; row<=endRow; row++){
                res.push_back(arr[row][endCol]);
            }
            clockwise=false;
        }
        
        else{
            for(int row=endRow; row>=startRow; row--){
                res.push_back(arr[row][endCol]);
            }
            clockwise=true;
        }
        
        // update values for next iteration
        endCol--;
    }
    return res;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n=4, m=4;

    // store result
    vector<int> result = wavePrint(n,m,arr);
    // print result
    for(int x : result){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
