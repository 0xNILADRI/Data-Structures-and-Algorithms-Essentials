#include<iostream>
using namespace std;

class Vector{
    // data members
    int cs = 0;
    int ms = 1;
    int *arr;

    public:
        // constructor
        Vector(){
            arr = new int[ms];
        }
        Vector(int maxSize){
            ms=maxSize;
            arr = new int[ms];
        }

        // push back
        void push_back(const int d){
            if(cs == ms){
                // create new array with double the capacity
                int *oldarr = arr;
                ms = 2*ms;
                arr = new int[ms];

                // copy the elements
                for(int i=0; i<cs; i++){
                    arr[i] = oldarr[i];
                }

                // delete the old array
                delete []oldarr;
            }
            arr[cs] = d;
            cs++;
        }

        // pop back
        void pop_back(){
            if(cs>=0){
                cs--;
            }
            if(cs<0){
                cs=0;
            }
        }

        // isEmpty
        bool isEmpty() const{
            return cs==0;
        }

        // front
        int front() const{
            return arr[0];
        }

        //back
        int back() const{
            return arr[cs-1];
        }

        //at
        int at(int i) const{
            if(i<cs)
                return arr[i];
            else
                return -1;
        }

        // size
        int size() const{
            return cs;
        }

        // capacity
        int capacity() const{
            return ms;
        }

        //[]
        int operator[](const int i) const{
            if(i<cs)
                return arr[i];
            else
                return -1;
        }
};

int main(){
    Vector v(2);

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