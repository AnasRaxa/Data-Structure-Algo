#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,6,8,1,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0,end = n-1,mid,ans = arr[0];

    while(start<=end){
        mid = start + (end - start)/2;
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }else{
            ans = arr[mid];
            end = mid -1 ;
        }
    }

    cout<<ans;





    return 0;
}