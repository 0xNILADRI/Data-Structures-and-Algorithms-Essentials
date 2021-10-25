#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10,11,2,3,4,5,6,7,8};
    int key;
    cin>>key;

    // linear search
    vector<int>::iterator it = find(arr.begin(),arr.end(),key);
    if(it!=arr.end()){
        cout<<"Found at index : "<<it-arr.begin()<<endl;
    }
    else
        cout<<"Element not found"<<endl;

    //  search ; subsequence
    vector<int> haystack;
    for(int i=0; i<10; ++i) haystack.push_back(i*10);
    int subsequence[] = {20,30,40};
    
    it = search(haystack.begin(), haystack.end(), subsequence, subsequence+3);
    if(it!=arr.end()){
        cout<<"Subsequence found at : "<<it-haystack.begin()<<endl;
    }
    else
        cout<<"Subsequence not found"<<endl;

    // binary search
    string res ;
    vector<int> arr1 = {1,2,3,4,5,6,7,8};
    if(binary_search(arr1.begin(),arr1.end(),8)){
        res = "True";
    }
    else{
        res = "False";
    }

    cout<<"Binary Search result : "<<res<<endl;


    return 0;
}