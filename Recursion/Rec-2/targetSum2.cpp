#include <bits/stdc++.h>
using namespace std;


bool find(int arr[],int start, int end,int target){

    if(target == 0) return 1;

    if(start == end || target < 0) return 0;


    find(arr,start+1,end,target) || find(arr,start+1,end,target-arr[start]);

    
}



int main(){

    int arr[] = {2,3,6};
    

    cout<<find(arr,0,3,8);

    





    return 0;
}