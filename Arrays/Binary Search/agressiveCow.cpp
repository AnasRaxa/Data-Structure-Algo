#include <bits/stdc++.h>
using namespace std;



int main(){

    vector<int> arr = {1,2,4,8,9};
    
    sort(arr.begin(),arr.end());

    int k  = 3;
    int n = arr.size();


    int start = 1, end = arr[n-1]-arr[0],mid,ans;


    while(start<=end){

        mid = start + (end-start)/2;


        int cows = 1,pos = arr[0];

        for(int i = 1; i < n; i++){
            if(pos+mid <= arr[i]){
                cows++;
                pos = arr[i];   
            }
        }

        if(cows<k){
            end = mid - 1;
            
        }else{
            ans = mid;
            start = mid + 1;
        }




    }


cout<<ans;



    return 0;
}