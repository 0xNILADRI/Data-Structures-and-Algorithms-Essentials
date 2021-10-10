#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    int n = v.size();
    bool swapped;
    for(int times=0; times<n-1; times++){
        swapped = false;
        for(int i=0; i<n-times-1; i++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                swapped = true;
            }
        }
        if(swapped==false)  break;
    }
   return v; 
}

int main(){
    vector<int> arr = {32,85,12,67,13,56,45,90,1,52};
    vector<int> res = optimizedBubbleSort(arr);
    cout<<"Bubble Sort Result :"<<endl;
    for(auto x: res){
        cout<<x<<endl;
    }
    return 0;
}