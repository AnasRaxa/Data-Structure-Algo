#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,3,2,1,2,7,6};
    int n = 7;

    int arr2[] = {0,0,0,0,0,0,0};


    for(int i = 0; i<n; i++){
        arr2[arr[i]-1]++;
    }


    int missing , repeating;

    for(int i = 0; i<n; i++){

        if(arr2[i] == 0) missing = i+1;
        if(arr2[i] > 1) repeating = i+1;

    }

    cout<<repeating<<" "<<missing;

    return 0;
}