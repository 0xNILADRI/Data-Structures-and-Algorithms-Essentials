#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> arr){
    int n = arr.size();
    // loop through array 1 to n-1
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 and arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev -= 1;
        }
        arr[prev+1] = current;
    }
    return arr;
}

int main(){
    vector<int> arr = {32,85,12,67,13,56,45,90,1,52};
    vector<int> res = insertionSort(arr);
    cout<<"Insertion Sort Result :"<<endl;
    for(auto x: res){
        cout<<x<<endl;
    }
    return 0;
}