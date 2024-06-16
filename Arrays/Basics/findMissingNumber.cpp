#include <bits/stdc++.h>
using namespace std;

void findMiss(int arr[],int n){
    int missing;

    for(int i = 0;i<n-3; i++){
        if(arr[i+1]-arr[i]>1){
            missing = arr[i] + 1;
        }
    }

    cout<<missing;

}
void findMiss2(int arr[],int n){
    
    int sum = n*(n+1)/2;
    int sum2 = 0;

    for(int i = 0; i<n-1; i++) sum2+=arr[i];

    int missing = sum-sum2;

    

    cout<<missing;

}

int main(){

    
    int arr[] = {1,2,3,5,6};
    findMiss2(arr,6);





    return 0;
}