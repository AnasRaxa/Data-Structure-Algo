#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {3,2,5,5,5,5,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);




    int start = 0, end = n-1, first = -1, last = -1, mid;

    int key = 5;

// find first occurence
    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid] == key){
            first = mid;
            end = mid -1;
        }else if(arr[mid]<key){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }


// find last occurence

    start = 0; end = n-1;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid] == key){
            last = mid;
            start = mid  + 1;
        }else if(arr[mid]<key){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }


int occu = last-first + 1;
cout<<occu;


    return 0;
}