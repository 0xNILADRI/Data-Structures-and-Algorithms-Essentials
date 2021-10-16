#include<bits/stdc++.h>
using namespace std;


int compress(string chars) {
    int count = 1;
    string result;
    for(int i=0; i<chars.size(); i++){
        while(i<chars.size()-1 && chars[i]==chars[i+1]){
            count++;
            i++;
        }
        result+=chars[i];
        if(count==1){
            continue;
        }
        result += to_string(count);
        count = 1;
    }
    cout<<result<<endl;
    return result.size();       
}

int main(){
    string st = "aabcccccccccccc";
    cout<<"Result : "<<compress(st)<<endl;
    return 0;
}