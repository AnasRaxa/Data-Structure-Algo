#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[]= {2,8,5,1,9,12,3};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i = 0; i<n-2;i++){
        bool swaped = 0;
        for(int j = n-1; j>i; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swaped = 1;
            }
        }

        if(swaped == 0) break;
    }
        
    for(int i: arr) cout<<i<<" ";


    return 0;
}