#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,3,2,1,2,7,6};
    int n = 7;

    for(int i = 0; i<n; i++){
        arr[i]--;  
    }

    for(int i = 0; i<n; i++){
        arr[arr[i]%n]+=n;
    }

    int missing , repeating;

    for(int i = 0; i<n; i++){
        if(arr[i]/n == 0) missing = i+1;
        if(arr[i]/n > 1) repeating = i+1;
    }

    cout<<missing<<" "<<repeating;

    

    return 0;
}