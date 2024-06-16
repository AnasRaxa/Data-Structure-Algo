#include <bits/stdc++.h>
using namespace std;

int searchElem(int arr[],int sz,int n){

    for(int i = 0; i<sz; i++){
        if(arr[i] == n){
            return i;
        }
    }
    return 0;

}

int main(){

    
    int arr[5] = {1,2,3,4,5};
    cout<<searchElem(arr,5,6);




    return 0;
}