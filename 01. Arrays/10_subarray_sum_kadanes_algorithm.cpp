#include <iostream>
using namespace std;

// Kadane's Algorithms; Time : O(n)
int subarraySum(int arr[], int n){
    int currentSum=0, sumMax=0;

    // kadane's algorithm
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum < 0)  currentSum = 0;
        sumMax = max(sumMax,currentSum);
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