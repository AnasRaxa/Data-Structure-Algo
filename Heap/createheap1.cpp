#include <bits/stdc++.h>
using namespace std;




void insert(int arr[], int n){

    int i = n;
    int temp = arr[i];

    while(i>1 && arr[i/2]<temp){

        arr[i] = arr[i/2];
        i = i/2;
        
    }

    arr[i] = temp;



}




int main(){

    
    int b[] = {0,10, 20, 30, 25, 5, 40, 35};

    int i;

    for(i = 2; i<8; i++){
        insert(b,i);
    }




    return 0;
}