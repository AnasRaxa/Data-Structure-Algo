#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {12,34,67,90};

    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0,end = 0,mid,ans,m=2;

    for(int i: arr){
        start = max(start,i);
        end+=i;
    }



    while(start<=end){

        mid = start + (end-start)/2;

        int pages = 0, user = 1;

        for(int i:arr){
            pages+=i;
            if(pages>mid){
                user++;
                pages = i;
            }
        }

        if(user<=m){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }


    }


cout<<ans;

    return 0;
}