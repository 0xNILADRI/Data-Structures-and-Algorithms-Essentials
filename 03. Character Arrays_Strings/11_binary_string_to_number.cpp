#include <bits/stdc++.h>
using namespace std;
 
int binaryToDecimal(string s){
    int result=0, j=0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='1'){
            result += pow(2,j);
        }
        j++;
    }
    return result;
}

int main(){
    string s = "1010";
    cout<<"Decimal convert : "<<binaryToDecimal(s)<<endl;
    return 0;
}