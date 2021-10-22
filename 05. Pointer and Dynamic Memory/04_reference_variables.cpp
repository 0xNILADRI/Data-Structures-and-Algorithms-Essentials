#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;     // same memory / alias ; basically x and y is the same
    x++;
    cout<<"Value of y (after x++) : "<<y<<endl;
    y++;
    cout<<"Value of x (after y++) : "<<x<<endl;
    return 0;
}