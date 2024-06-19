#include <bits/stdc++.h>
using namespace std;


void segregate1(int arr[],int n){

    int count0 = 0, count1 = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == 0)
            count0++;
        else
            count1++;
    }

    for(int i = 0; i<n; i++){
        if(i<count0){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }




}
void segregate2(int arr[],int n){

    int start = 0, end = n-1;

    while(start<end){

        if(arr[start] == 0){
            start++;
        }else{
            if(arr[end] == 0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }else{
                end--;
            }
        }


    }




}



int main(){

    int arr[] = {0,0,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    // segregate1(arr,n);
    segregate2(arr,n);

    for(int i: arr) cout<<i<<" ";





    return 0;
}