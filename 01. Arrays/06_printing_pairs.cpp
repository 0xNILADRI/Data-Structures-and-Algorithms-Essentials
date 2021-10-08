#include <iostream>
using namespace std;

void printPairs(int arr[], int n){
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            int y = arr[j];
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    // print array 
    for(int x: arr){
        cout<<x<<endl;
    }

    cout<<endl<<"Pairs : "<<endl;

    printPairs(arr,n);

    return 0;
}