#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,6,8,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0,end = n-1,mid,ans = -1, target = 2;


    while(start<=end){

        mid = start + (end - start) /2;

        if(arr[mid] == target){
            ans = mid;
        }

        else if(arr[mid] >= arr[0]){
            if(arr[start] <= target && arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        else{
            if(arr[mid] < target && arr[end]>=target)
                start = mid + 1;
            else
                end = mid - 1;
            
        }

    }

    // cout<<"-1";



    return 0;
}