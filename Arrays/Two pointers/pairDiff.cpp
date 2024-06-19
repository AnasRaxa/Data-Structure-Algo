#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {2,3,5,10,50,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 45;
    if(target<0) target = target*-1;
    
    int start = 0;
    int end = 1;

    while(end<n){
        if(arr[end]-arr[start] == target){
            cout<<start<<" "<<end;
            break;
        }
        else if(arr[end] - arr[start] < target){
            end++;
        }
        else{
            start++;
        }

        if(start == end) end++;
    }





    return 0;
}