#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<b;
}

void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {32,85,12,67,13,56,45,90,1,52};
    int arr2[] = {32,85,12,67,13,56,45,90,1,52};
    int arr3[] = {32,85,12,67,13,56,45,90,1,52};
    int arr4[] = {32,85,12,67,13,56,45,90,1,52};
    int n = sizeof(arr1)/sizeof(int);

    // inbuilt sort function
    sort(arr1,arr1+n);
    displayArray(arr1,n);
    cout<<endl;

    // inbuilt reverse fnction
    reverse(arr2,arr2+n);
    displayArray(arr2,n);
    cout<<endl;

    // comparator function
    sort(arr3, arr3+n, compare);
    displayArray(arr3,n);
    cout<<endl;

    // inbuilt comparator function
    sort(arr4,arr4+n, greater<int>());
    displayArray(arr4,n);

    return 0;
}