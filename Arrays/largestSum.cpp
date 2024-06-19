#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,-6,2,8};
    int n = 4;

int maxim = -1;

    for(int i = 0; i<n; i++){
        
        int prefix = 0;

        for(int j = i; j<n; j++){

            prefix+=arr[j];
            maxim = max(maxim,prefix);
            
        }
        
    }

    cout<<maxim;



    return 0;
}