#include<iostream>
using namespace std;

int main(){
    char arr[][10]={
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred",
    };

    cout<<arr[3][0]<<endl;
    cout<<arr[3]<<endl;
    return 0;
}