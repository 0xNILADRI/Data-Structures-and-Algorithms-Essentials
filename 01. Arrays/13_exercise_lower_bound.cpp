#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int low = 0, high = A.size()-1,mid, answer = -1;
    while(low<=high){
        mid = (low + high)/2;
        if(A[mid]>Val){
            high = mid - 1;
        }
        else{
            answer = A[mid];
            low = mid + 1;
        }
    }
    return answer;
}

int main(){
    vector<int> arr = {1,3,4,6,8,10,35,92,114,122};
    cout<<"Lower Bound : "<< lowerBound(arr,38)<<endl;
    return 0;
}