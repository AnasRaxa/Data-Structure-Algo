#include <bits/stdc++.h>
using namespace std;









void merge(int arr[], int l, int mid , int h){

    int merged[l+h];
    int i = l, j = mid+1;
    int k  = l;

    while(i<=mid && j<=h){

        if(arr[i]<arr[j]){
            merged[k] = arr[i];
            i++;
            k++;
        }else{
            merged[k] = arr[j];
            j++;
            i++;
        }

    }

    while(i<=mid) merged[k++] = arr[i++];
    while(j<=h) merged[k++] = arr[j++];

    for(int i = l; i<=h; i++) arr[i] = merged[i];










}












int main(){

    





    return 0;
}