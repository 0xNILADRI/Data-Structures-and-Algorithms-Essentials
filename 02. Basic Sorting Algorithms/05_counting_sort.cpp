#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr){
    int n = arr.size();
    int largest = INT_MIN;

    // find the largest value
    for(int x: arr){
        largest = max(largest,x);
    }

    // create frequency array
    vector<int> freq(largest+1,0);
    
    // fill in frequency
    for(int x: arr){
        freq[x]++;
    }

    // put back elements from frequency array to original array, using j for original array's index
    for(int i=0, j=0; i<=largest; i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {32,85,12,67,13,56,45,90,1,52};
    vector<int> res = countingSort(arr);
    cout<<"Counting Sort Result :"<<endl;
    for(auto x: res){
        cout<<x<<endl;
    }
    return 0;
}