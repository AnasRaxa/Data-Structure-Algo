#include <bits/stdc++.h>
using namespace std;



void iterate(int* arr,int index,int n){


    if(index == n) return;


    cout<<arr[index]<<" ";
    iterate(arr,index+1,n);


}
void iterate(int* arr,int n){


    if(n == -1) return;

    iterate(arr,n-1);

    cout<<arr[n]<<" ";


}



int main(){

    int arr[] = {1,2,3,4,5};

    int n  = sizeof(arr)/sizeof(arr[0]);

    iterate(arr,n-1);







    return 0;
}