#include <bits/stdc++.h>
using namespace std;

int sumSubArray1(int arr[],int n){


    for(int i = 0; i<n-1; i++){

        int sum1 = 0, sum2 = 0;

        for(int j = 0; j<=i; j++)
            sum1+=arr[j];

        for(int j = i+1; j<n; j++)
            sum2+=arr[j];


        if(sum1 == sum2) return i;


    }

}
int sumSubArray2(int arr[],int n){
    int sum = 0;

    for(int i = 0; i<n; i++) sum+=arr[i];

    int prefix = 0;

    for(int i = 0; i<n-1; i++){

        prefix+=arr[i];

        if(prefix == sum - prefix) return i;


    }

}

int main(){

    int arr[] = {3,4,-2,5,8,20,-10,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<sumSubArray1(arr,n);





    return 0;
}