#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {3,2,5,7,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);


    int start = 0, end = n-1,mid;
    int key = 10;

    while(start<=end){

        mid = start + (end-start)/2;

        if(arr[mid] == key){
            cout<<"Found";
            break;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }





    return 0;
}