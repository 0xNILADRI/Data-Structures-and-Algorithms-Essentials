#include<bits/stdc++.h>
using namespace std;

int compare(int a, int b){
    return a > b;
}

vector<int> sortingWithComparator(vector<int> v, bool flag){
    // your code  goes here
    if(flag) sort(v.begin(), v.end());
    else sort(v.begin(), v.end(), compare);
    return v;
    
}

int main(){
    vector<int> arr={5,8,3,4,2,9,10,6};
    vector<int> arr1 = sortingWithComparator(arr,true);
    for(int x: arr1){
        cout<<x<<" ";
    }
    return 0;
}
