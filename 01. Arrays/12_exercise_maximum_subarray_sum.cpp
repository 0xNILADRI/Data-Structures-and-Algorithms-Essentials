#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int maxSum=INT_MIN, currentSum=0, n = A.size();
    for(int i=0; i<n; i++){
        currentSum += A[i];
        if(currentSum<0)    currentSum=0;
        maxSum=max(currentSum,maxSum);
    }
    if (maxSum == 0)    return -1;
    else    return maxSum;
}

int main(){
    vector<int> arr = {1,3,2,6,4,0,35,92,4,2};
    cout<<"Max Sum Subarray : "<< maxSumSubarray(arr)<<endl;
    return 0;
}