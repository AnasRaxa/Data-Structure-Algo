#include <bits/stdc++.h>
using namespace std;



int main(){

    char arr[]= "hello";
    int n = 5;


    for(int i = 0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(char i: arr) cout<<i<<" ";



    return 0;
}