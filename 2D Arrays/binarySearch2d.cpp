#include <bits/stdc++.h>
using namespace std;



int main(){

    int matrix[4][4] = {
    1,2,3,4,
    5,6,7,8,
    9,10,11,12,
    13,14,15,16
    };
    int target = 11;
            int n = 4 , m = 4;

        int start = 0, end = m*n-1, mid, row, col;

        while(start<=end){

            mid = start+(end-start)/2;
            
            row = mid / m , col = mid%m;

            if(matrix[row][col] == target){
                return 1;
            }else if (matrix[row][col]<target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }



        }





    return 0;
}