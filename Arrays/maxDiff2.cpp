#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int arr2[7];
    int n = 7;

// find suffmax
    arr2[n-1] = arr[n-1];
    for(int i = n-2; i>=0; i--){
        arr2[i] = max(arr2[i+1],arr[i]);
    }


    int maxim = -1;


    for(int i = 0; i<n-1; i++){

        maxim = max(maxim,arr2[i+1]-arr[i]);

    }

      
    

    cout<<maxim;



    return 0;
}