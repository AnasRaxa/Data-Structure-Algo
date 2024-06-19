#include <bits/stdc++.h>
using namespace std;


void findSum(int arr[],int n,int target){

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j] == target){
                cout<<i<<" "<<j;
            }
        }
    }

}
void findSum2(int arr[],int n,int target){

    for(int i = 0; i<n-1; i++){
        
        int x = target-arr[i];

        int start = i+1,end = n-1,mid;

        while(start<=end){
            mid = start + (end - start)/2;
            
            if(arr[mid] == x){
                cout<<i<<" "<<mid;
                break;
            }else if (arr[mid] < x){
                start = mid + 1;
            }else{
                end = mid - 1;
            }

        }

    }

}
void findSum3(int arr[],int n,int target){

    int start = 0, end = n-1;

    while(start<end){

        if(arr[start] + arr[end] == target){
            cout<<start<<" "<<end;
            break;
        }
        else if (arr[start] + arr[end] < target){
            start++;
        }else{
            end--;
        }

    }

}




int main(){

    int arr[] = {2,7,11,15};
    int n= sizeof(arr)/sizeof(arr[0]);

    int target = 9;

    findSum3(arr,n,target);




    return 0;
}