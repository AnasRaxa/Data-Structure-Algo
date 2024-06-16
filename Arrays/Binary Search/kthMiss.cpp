#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {2,3,4,7,11,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end = n-1,mid,ans,k = 5;

    while(start<=end){

        mid = start + (end-start) /2;
        
        if((arr[mid] - mid - 1)>= k ){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }


    }

    cout<<ans+k;






    return 0;
}