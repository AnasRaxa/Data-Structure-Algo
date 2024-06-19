#include <bits/stdc++.h>
using namespace std;




void findProd(int arr[],int n,int target){

    int start = 0, end = n-1;

    while(start<end){

        if(arr[start] * arr[end] == target){
            cout<<start<<" "<<end;
            break;
        }
        else if (arr[start] * arr[end] < target){
            start++;
        }else{
            end--;
        }

    }

}




int main(){

    int arr[] = {3,7,8,11,25};
    int n= sizeof(arr)/sizeof(arr[0]);

    int target = 56;

    findProd(arr,n,target);




    return 0;
}