#include <bits/stdc++.h>
using namespace std;





void dlt(int arr[], int n){


    int i, j, x;

    x = arr[1];
    arr[1] = arr[n];

    i = 1;
    j = i*2;

    while(j<n-1){


        if(arr[j+1]>arr[j]){

            j = j+1;

        }

        if(arr[j]>arr[i]){

            swap(arr[i],arr[j]);

             i = j;
             j = j*2;


        }
        else{
            break;
        }

       arr[n] = x;

    }



}














int main(){

    





    return 0;
}