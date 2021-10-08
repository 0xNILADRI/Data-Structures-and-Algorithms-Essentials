#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n){
    int sum=0, sumMax=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<",";
                sum += arr[k];
            }
            cout<<endl;
        }
        cout<<"SUM : "<<sum<<endl;
        if(sum>sumMax) sumMax = sum;
        sum = 0;
    }
    cout<<endl<<"Largest Sum : "<<sumMax<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    // print array 
    for(int x: arr){
        cout<<x<<endl;
    }

    cout<<endl<<"Subarrays : "<<endl;

    printSubarrays(arr,n);

    return 0;
}