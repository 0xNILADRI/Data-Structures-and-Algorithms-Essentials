#include<iostream>
using namespace std;

int** create2dArray(int rows, int cols){
    // create 2D Array
    int **arr = new int*[rows];     // array of pointer of pointers
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
    }

    // fill the array
    int value = 1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

int main(){
    int n, m;
    cin>>n>>m;
    int **arr = create2dArray(n,m);
    // print the 2D array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // delete dynamic array
    for(int i=0; i<n; i++){
        delete []arr[i];        // delete each sub array
    }
    delete []arr;               // delete pointer of pointer array
    return 0;
}