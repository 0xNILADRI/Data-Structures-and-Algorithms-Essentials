#include <iostream>
using namespace std;

// Kadane's Algorithms; Time : O(n)
int subarraySum(int arr[], int n){
    int currentSum=0, sumMax=INT_MIN;

    // kadane's algorithm
    for(int i=0; i<n; i++){
        currentSum = max(arr[i], arr[i] + currentSum);
        sumMax = max(sumMax,currentSum);
    }
    return sumMax;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    // print array 
    cout<<"Array Elements : "<<endl;
    for(int x: arr){
        cout<<x<< " ";
    }
    
    cout<<endl<<"Largest Subarray Sum : "<<subarraySum(arr,n)<<endl;;

    return 0;
}