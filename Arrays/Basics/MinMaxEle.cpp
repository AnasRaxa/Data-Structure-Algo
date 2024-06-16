#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[],int n){
    int min = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]<min) min = arr[i];
    }

    return min;

}
int findMax(int arr[],int n){
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>max) max = arr[i];
    }

    return max;

}

int main(){

    int arr[5] = {1,2,3,4,5};

    cout<<findMax(arr,5);
    cout<<findMin(arr,5);





    return 0;
}