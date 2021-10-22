#include<iostream>
using namespace std;

void applyTax(float &in){       // pass by reference ; opriginal value change
    in = in - in*0.10;
}

int main(){
    float income;
    cin>>income;
    applyTax(income);       
    cout<<income<<endl;
    return 0;
}