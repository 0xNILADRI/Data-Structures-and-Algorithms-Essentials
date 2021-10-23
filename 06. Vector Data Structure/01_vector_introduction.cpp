#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,10,12,15};

    // push back element
    arr.push_back(16);

    // size of vector
    cout<<arr.size()<<endl;

    // capacity of vector
    cout<<arr.capacity()<<endl;

    // delete last element
    arr.pop_back();

    // fill constructor 
    vector<int> arr1(10,7);    // 10 no of elements ; 7

    return 0;
}