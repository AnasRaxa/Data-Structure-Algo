#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,-6,2,8};
    int n = 4;

int maxim = -1;
int prefix = 0;

    for(int i = 0; i<n; i++){
        
        prefix+=arr[i];
        maxim = max(maxim,prefix);
        if(prefix < 0) prefix = 0;
        
        
    }

    cout<<maxim;



    return 0;
}