#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,3,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i <= n; i++) {
    
    for (int left = 0; left <= n - i; left++) {
        
        int right = left+i;

        if(right <= n){
            for(int k = left;k<=right; k++){
                cout<<arr[k]<<" ";
            }
        }

        cout<<endl;
    }
}





    return 0;
}