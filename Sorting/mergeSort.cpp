#include <bits/stdc++.h>
using namespace std;


void merge(int a[],int l,int mid, int h){


    int i = l, j = mid+1, k = l;
    int b[100];


    while(i<=mid && j<=h){

        if(a[i]<a[j]){
            b[k++] = a[i++];
        }else{
            b[k++] = a[j++];
        }

    }

    while(i<=mid) b[k++] = a[i++];
    while(j<=h) b[k++] = a[j++];

    for(int i = l; i<=h; i++) a[i] = b[i];


}


void mergeSort(int arr[],int l, int h){

    int mid;


        if(l<h){

            mid = (l+h)/2;

            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,h);
            merge(arr,l,mid,h);


        }
    


}










int main(){

    





    return 0;
}