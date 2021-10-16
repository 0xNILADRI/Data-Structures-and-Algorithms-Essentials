#include <iostream>
using namespace std;

int main(){
    char a[1000] = {'a','b','c','\0'};
    char b[1000] = "abc";              // similar to a
    cout<<a<<endl;
    // read line ; one character at a time
    int len=1;
    char temp = cin.get();
    while(temp!='\n'){
        len++;
        cout<<temp;
        temp=cin.get(); //update value of temp
    }
    cout<<endl<<"Length : "<<len<<endl;
    return 0;
}