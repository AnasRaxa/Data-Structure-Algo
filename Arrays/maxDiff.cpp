#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,-6,2,8};
    int n = 4;

int maxim = -1;

    for(int i = 0; i<n; i++){
        

        for(int j = i+1; j<n; j++){

            maxim = max(maxim,arr[j]-arr[i]);
            
        }
        
    }

    cout<<maxim;



    return 0;
}