#include <bits/stdc++.h>
using namespace std;


int findPvt(int arr[], int start, int end){
    

    int pos = start;

    for(int i = start; i<=end; i++){

        if(arr[i]<=arr[end]){

            swap(arr[pos],arr[i]);

            pos++;

        }


    }

    return pos-1;




}

void qckSort(int* arr, int start , int end){

    if(start>=end) return;

    int pivot = findPvt(arr,start,end);

    qckSort(arr,start,pivot-1);
    qckSort(arr,pivot+1,end);


}



int main(){

    int arr[] = {6,3,1,2,8,9,10,7,3,10};

    qckSort(arr,0,9);

    for(int i = 0; i<=9; i++) cout<<arr[i]<<" ";





    return 0;
}