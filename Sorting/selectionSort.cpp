#include <bits/stdc++.h>
using namespace std;




void selectionSort(int arr[], int n){

    int k;


    for(int i = 0; i<n-1; i++){

        k = i;

        for(int j = i; j<n; j++){

            
            if(arr[j]<arr[k]) k = j;

        }

        swap(arr[i],arr[k]);


    }









}











int main(){

    





    return 0;
}