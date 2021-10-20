#include<iostream>
using namespace std;

void spiralPrint(int arr[][10],int n, int m){
    int startRow = 0, endRow = n-1, startCol=0, endCol = m-1;

    // loop through the array boundary
    while(startRow<=endRow and startCol<=endCol){

        // start row
        for(int col=startCol; col<=endCol; col++){
            cout<<arr[startRow][col]<<" ";
        }

        // end column
        for(int row=startRow+1; row<=endRow; row++){
            cout<<arr[row][endCol]<<" ";
        }

        // end row
        for(int col=endCol-1; col>=startCol; col--){
            if(startRow==endRow){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }

        // start column
        for(int row=endRow-1; row>=startRow+1; row--){
            if(startCol==endCol){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }

        // update values to cover through inner boundary
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
    cout<<endl;
}

int main(){
    int arr[][10]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    // size of row and column
    int n=4, m=4;

    // print spiral values
    spiralPrint(arr,n,m);
    return 0;
}