#include <iostream>
using namespace std;

// Prefix Sum Approach O(n^2)
int subarraySum(int arr[], int n){
    // prefix sum 
    int prefix[100] = {0}, sumMax=0;
    prefix[0] = arr[0];

    // Time : O(n)
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    // Time : O(n^2)
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            sumMax = max(sumMax,sum);
        }
    }
    return sumMax;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    // print array 
    for(int x: arr){
        cout<<x<<endl;
    }
    
    cout<<endl<<"Largest Subarray Sum : "<<subarraySum(arr,n)<<endl;;

    return 0;
}