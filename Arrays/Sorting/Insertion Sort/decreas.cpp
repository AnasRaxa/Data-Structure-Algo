#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[]= {2,8,5,1,9,12,3};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i = 1; i<n; i++){

        for(int j = i; j>0; j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }

    }
        
    for(int i: arr) cout<<i<<" ";


    return 0;
}