#include <bits/stdc++.h>
using namespace std;

void swapArr(int arr[],int n,int i){
    if(i>=n) return;
    swap(arr[i],arr[n]);
    swapArr(arr,n-1,i+1);
}

void swapArr2(int arr[],int n,int i){

    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);

    swapArr2(arr,n,i+1);


}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    swapArr2(arr,6,0);

    for(int i:arr) cout<<i<<" ";





    return 0;
}