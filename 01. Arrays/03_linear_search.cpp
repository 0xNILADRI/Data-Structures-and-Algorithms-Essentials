#include <iostream>
using namespace std;

// brute force technique
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    int index = linearSearch(arr,n,key);
    if(index!=-1)   cout<<"Present at index "<< index << endl;
    else   cout<<"Not found"<<endl;

    return 0;
}