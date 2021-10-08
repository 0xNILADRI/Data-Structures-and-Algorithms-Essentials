#include <iostream>
using namespace std;


// pass by refernce
void printArray(int * arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);
    return 0;
}