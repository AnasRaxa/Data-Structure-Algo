// homework

#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[]= {2,8,5,1,9,12,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1; i>0; i--){
        int index = i;

        for(int j = i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index = j;
            }
        }

        swap(arr[i],arr[index]);
        

    }

    for(int i: arr) cout<<i<<" ";





    return 0;
}