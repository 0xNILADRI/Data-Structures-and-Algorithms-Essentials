#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    string result;
    set<char> ss(s.begin(),s.end());
    for(auto x: ss){
        result.push_back(x);
    }
    return result;
}

int main(){
    string s = "geekforgeeks";
    cout<<"Result : "<<removeDuplicate(s)<<endl;
    return 0;
}