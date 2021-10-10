#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    sort(length.begin(), length.end());
    int count = 0;

    for(int i=0; i<length.size()-1; i++)
    {
        if (length[i + 1] - length[i] <= D){ 
            count++; 
            i++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,3,3,9,4};
    cout<<"Result : "<<pairSticks(arr,2)<<endl;
    return 0;
}