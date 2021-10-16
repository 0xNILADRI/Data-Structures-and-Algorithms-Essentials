#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    string vowels;
    for(int i=0; i<S.size(); i++){
        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
            vowels.push_back(S[i]);
        }
    }
    return vowels;
} 

int main(){
    string s = "aeiobsddaeioudb";
    cout<<"Vowels : "<<vowel(s)<<endl;
    return 0;
}