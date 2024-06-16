#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[],int sz){

    for(int i = 0,j=sz-1; i<j;i++,j--){

        swap(arr[i],arr[j]);

    }

}


int main(){

    
    int arr[] = {1,2,3,4,5,6,7};
    int sz = sizeof(arr)/sizeof(int);
    reverseArray(arr,sz);

    for(int i:arr) cout<<i<<" ";




    return 0;
}