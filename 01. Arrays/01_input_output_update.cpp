#include <iostream>
using namespace std;

int main(){
    // update ; set all elements to zero
    int n, arr[100]={0};
    cout<<"Enter no of elements \n";
    cin>>n;

    // input 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // output 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}