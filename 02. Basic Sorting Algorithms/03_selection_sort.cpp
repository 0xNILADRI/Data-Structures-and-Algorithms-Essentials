#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> arr){
    int n = arr.size();
    // loop through array 0 to n-1
    for(int i=0; i<=n-2; i++){
        int min_pos = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min_pos]){
                min_pos = j;
            }
        }
        // swap outside loop
        swap(arr[min_pos],arr[i]);
    }
    
    return arr;
}

int main(){
    vector<int> arr = {32,85,12,67,13,56,45,90,1,52};
    vector<int> res = insertionSort(arr);
    cout<<"Selection Sort Result :"<<endl;
    for(auto x: res){
        cout<<x<<endl;
    }
    return 0;
}