#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;
    cout<<"Address of x : "<<ptr<<endl;
    cout<<"Value of variable *ptr : "<<*ptr<<endl;
    cout<<"Value of variable *(&x): "<<*ptr<<endl;

    // set pointer to NULL
    ptr = NULL;
    return 0;
}