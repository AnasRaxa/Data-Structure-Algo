#include <bits/stdc++.h>
using namespace std;




void insertionSort(int arr[], int n){

    int x,j;


    for(int i = 1; i<n; i++){

        x = arr[i];
        j = i-1;


        while(arr[j]>x && j>=0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = x;



    }



}












int main(){

    





    return 0;
}