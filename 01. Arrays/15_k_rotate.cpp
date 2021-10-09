#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    vector<int> res;
    int low = 0, high = a.size()-1, n=a.size();
    k = k%n;
    for(int i=0; i<n; i++){
        if(i<k){
            res.push_back(a[n+i-k]);
        }
        else
            res.push_back(a[i-k]);
    }
    return res;
}

int main(){
    vector<int> arr = {1,3,4,6,8,10,35,92,114,122};
    vector<int> result = kRotate(arr,3);
    
    // display array
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" , ";
    }
    return 0;
}