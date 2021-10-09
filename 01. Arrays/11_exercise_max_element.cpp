#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    return *max_element(arr.begin(),arr.end());
}

int main(){
    vector<int> arr = {1,3,2,6,4,0,35,92,4,2};
    cout<<"Max element : "<< largestElement(arr)<<endl;
    return 0;
}