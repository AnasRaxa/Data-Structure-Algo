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


void mergeSort(int arr[],int n){

    int l,h,mid;
    int p;
    
    for(p = 2; p<=n; p*=2){



        for(int i = 0; i+p-1<n; i=i+p){

            l = i;
            h = i+p-1;
            mid = (l+h)/2;

            merge(arr,l,mid,h);
            

        }



    }

    if(p/2<n){
        merge(arr,0,p/2-1,n-1);
    }
    


}










int main(){

    





    return 0;
}