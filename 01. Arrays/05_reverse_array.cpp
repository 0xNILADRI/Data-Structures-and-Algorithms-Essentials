#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int low = 0, high = n - 1;
    while(low < high){
        swap(arr[low++],arr[high--]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    reverseArray(arr,n);

    // print array
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    return 0;
}