#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello world",s1;
    // read string
    getline(cin,s1,'\n');
    for(char ch : s){
        cout<<ch<<",";
    }
    cout<<endl;

    // create vector of string
    int size;
    cin>>size;
    cin.get();
    vector<string> sarr;
    string temp;
    while(size--){
        getline(cin,temp,'\n');
        sarr.push_back(temp);
    }

    for(string st: sarr){
        cout<<st<<endl;
    }

    return 0;
}
