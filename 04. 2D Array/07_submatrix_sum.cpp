#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int m=v.size();
    int n=v[0].size();

    // // int aux[m][n];
    int M=m;
    int N=n;
    vector<vector<int>> aux = v;
    vector<vector<int>> mat = v;
    int tli=sr, tlj=sc, rbi=er, rbj=ec;
      for (int i=0; i<N; i++)
      aux[0][i] = mat[0][i];
  
    // Do column wise sum
    for (int i=1; i<M; i++)
        for (int j=0; j<N; j++)
            aux[i][j] = mat[i][j] + aux[i-1][j];
    
    // Do row wise sum
    for (int i=0; i<M; i++)
        for (int j=1; j<N; j++)
            aux[i][j] += aux[i][j-1];
    
 
    int res = aux[rbi][rbj];
  
    // Remove elements between (0, 0) and (tli-1, rbj)
    if (tli > 0)
       res = res - aux[tli-1][rbj];
  
    // Remove elements between (0, 0) and (rbi, tlj-1)
    if (tlj > 0)
       res = res - aux[rbi][tlj-1];
  
    // Add aux[tli-1][tlj-1] as elements between (0, 0)
    // and (tli-1, tlj-1) are subtracted twice
    if (tli > 0 && tlj > 0)
       res = res + aux[tli-1][tlj-1];
  
    return res;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4,6},
        {5,3,8,1,2},
        {4,6,7,5,5},
        {2,4,8,9,4}
    };

    cout<<"Result : "<<sum(arr,0,0,1,1)<<endl;
    return 0;
}