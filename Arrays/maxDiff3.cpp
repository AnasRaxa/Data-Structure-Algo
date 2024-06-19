#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {2, 3, 10, 6, 4, 8, 1};
   
    int n = 7;


    


    int maxim = -1;


    for(int i = n-2; i>=0; i--){

        maxim = max(maxim,arr[i+1]-arr[i]);
        if(arr[i]<arr[i+1]){
            arr[i] = arr[i+1];
        }

    }

      
    

    cout<<maxim;



    return 0;
}