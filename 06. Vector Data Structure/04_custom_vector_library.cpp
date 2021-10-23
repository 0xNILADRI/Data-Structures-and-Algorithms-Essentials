#include<iostream>
#include "04_custom_vector_library.h"
using namespace std;

int main(){
    Vector<int> v(2);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<v.at(2)<<endl;

    cout<<v[2]<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}