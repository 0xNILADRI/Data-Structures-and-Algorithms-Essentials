#include <iostream>
using namespace std;

// Brute Force Approach
int subarraySum(int arr[], int n){
    int sumMax = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
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