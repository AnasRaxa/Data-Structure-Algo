#include <bits/stdc++.h>
using namespace std;


void pair(int arr[], int n,int x){

    
    for(int i = 0; i<n-1; i++){

        for(int j = i+1; j<n; j++){

            if(arr[i]+ arr[j] == x){
                cout<<arr[i]<<arr[j]<<endl;
            }

        }


    }




}
void pair2(int arr[], int n,int x){

int heigher = 20;

    vector<int>temp(heigher,0);

    
    for(int i = 0; i<n; i++){

        if(temp[x-arr[i]] != 0){

            cout<<arr[i]<<x-arr[i]<<endl;            


        }else{
                temp[arr[i]]++;
        }


    }




}



void pair3(int arr[], int n,int x){


    int i = 0, j = n-1;

    while(i<j){

        if(arr[i]+arr[j] == x) cout<<arr[i]<<arr[j]<<endl;
        else if(arr[i] + arr[j] < x) i++;
        else j--;


    }



}












int main(){

    





    return 0;
}