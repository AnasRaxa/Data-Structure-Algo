#include <bits/stdc++.h>
using namespace std;

    void findSecHigh(int arr[], int sz){

        int max = arr[0];
        int secondMax  = -1;

        for(int i = 1; i<sz; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        for(int i = 0; i<sz; i++){
            if(arr[i] != max){
                if(arr[i]>secondMax){
                    secondMax = arr[i];
                }
            }
            
        }

        cout<<"Max: "<<max<<" Second Max: "<<secondMax;

    }

int main(){

    int arr[] = {7,2,4,1,5,6,3};

    findSecHigh(arr,7);





    return 0;
}