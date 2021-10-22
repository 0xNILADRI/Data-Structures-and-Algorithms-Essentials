#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *xptr = &x;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of pointer : "<<xptr<<endl;     // pointer to variable x

    int **xxptr = &xptr;
    cout<<"Address of pointer to pointer : "<<xxptr<<endl;     // pointer to a pointer
    return 0;
}