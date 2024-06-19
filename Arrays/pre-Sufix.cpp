#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {6,4,5,-3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    int suffix[n];



    // loop to find prefix
    
    prefix[0] = arr[0];

    for(int i = 1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    // for(int i : prefix) cout<<i<<" ";



    // loop to find suffix
    
    suffix[n-1] = arr[n-1];

    for(int i = n-2; i>=0; i--){
        suffix[i] = suffix[i+1] + arr[i];
    }

    for(int i : suffix) cout<<i<<" ";






    return 0;
}