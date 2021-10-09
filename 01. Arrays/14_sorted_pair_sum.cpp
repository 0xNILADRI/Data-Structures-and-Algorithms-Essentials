#include<bits/stdc++.h>
using namespace std;

pair<int,int> closestSum(vector<int> arr, int x){

    // Two pointer approach
    int result1, result2, low = 0, high = arr.size()-1, diff = INT_MAX;
    while(high>1){
        if(abs(arr[low] + arr[high] - x) < diff){
            result1 = low;
            result2 = high;
            diff = abs(arr[low] + arr[high] - x);
        }
        
        if(arr[low] + arr[high] > x){
            high--;
        }
        else{
            low++;
        }
    }
    return {arr[result1],arr[result2]};
}

int main(){
    vector<int> arr = {1,3,4,6,8,10,35,92,114,122};
    pair<int,int> result = closestSum(arr,40);
    cout<<result.first<<" , "<<result.second;
    return 0;
}