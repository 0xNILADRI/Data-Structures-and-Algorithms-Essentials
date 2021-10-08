#include <iostream>
using namespace std;

// brute force technique
int binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1, mid;
    while(low <= high){
        mid = (low + high)/2;
        if (arr[mid]==key)  return mid;
        else if(arr[mid]<key) low = mid + 1;
        else   high = mid - 1; 
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    int index = binarySearch(arr,n,key);
    if(index!=-1)   cout<<"Present at index "<< index << endl;
    else   cout<<"Not found"<<endl;

    return 0;
}