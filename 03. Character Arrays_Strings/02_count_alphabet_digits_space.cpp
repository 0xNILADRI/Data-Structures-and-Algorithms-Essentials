#include <iostream>
using namespace std;

int main(){
    char ch;
    int alphaCount=0, spaceCount=0, digitCount=0;
    ch = cin.get(); 
    while(ch!='\n'){
        if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alphaCount++;
        }
        else if(ch>='0' and ch<='9'){
            digitCount++;
        }
        else if(ch==' ' or ch=='\t'){
            spaceCount++;
        }
        ch = cin.get();
    }
    cout<<"Aplhanumeric Count : "<<alphaCount<<endl;
    cout<<"Digit Count : "<<digitCount<<endl;
    cout<<"Space Count : "<<spaceCount<<endl;
    return 0;
}