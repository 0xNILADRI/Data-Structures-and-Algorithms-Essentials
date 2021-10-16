#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    // your code goes here
    int n1 = A.size(), n2 = B.size();
    if(n1!=n2){
        return false;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    for(int i=0; i<n1; i++){
        if(A[i]!=B[i])
            return false;
    }
    
    return true;
}

int main(){
    string a="abcd", b="dabc";
    bool ans = arePermutation(a,b);
    if(ans)
        cout<<"Is Permutation"<<endl;
    else
        cout<<"Not a permutation"<<endl;
        
    return 0;
}