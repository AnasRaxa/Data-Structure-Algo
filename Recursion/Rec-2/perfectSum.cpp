#include <bits/stdc++.h>
using namespace std;


int find(int arr[],int start, int end,int target){

    if(start == end){
        if(target == 0) return 1;
        else return 0;
    }


    return find(arr,start+1,end,target) + find(arr,start+1,end,target-arr[start]);

    
}



int main(){

    int arr[] = {2,5,6,1};
    

    cout<<find(arr,0,4,8);

    





    return 0;
}