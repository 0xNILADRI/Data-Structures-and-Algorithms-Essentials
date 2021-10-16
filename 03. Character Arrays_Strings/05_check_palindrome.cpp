#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[1000];
    cin.getline(str,1000);
    bool ans = true;
    int low=0, high=strlen(str)-1;
    while(high>low){
        if(str[low++]!=str[high--]){
            ans = false;
            break;
        }
    }
    if(ans) cout<<"Palindrome"<<endl;
    else    cout<<"Not palindrome"<<endl;
    return 0;
}