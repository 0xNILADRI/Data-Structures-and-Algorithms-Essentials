#include<iostream>
using namespace std;

void fillArray(int *&a, int n){
    for(int i=1; i<=n; i++){
        a[i] = i;
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    // dynamic array
    int *arr = new int[n];
    fillArray(arr,n);
    cout<<endl;

    // delete memory from heap
    delete []arr;
    return 0;
}