#include <bits/stdc++.h>
using namespace std;



int main(){

    int n = 3, m = 3, x = 62;
    int matrix[n][m] = { 3, 30, 38,
              36, 43, 60,
              40, 51, 69};

        int row = 0, col = m-1;
        
        while(col>=0 && row<n){
            
            
            if(matrix[row][col] == x){
                return 1;
            }
            else if (matrix[row][col] < x){
                row++;
            }
            else{
                col--;
            }
            
            
            
        }
        return 0;





    return 0;
}