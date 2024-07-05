#include <bits/stdc++.h>
using namespace std;





void duplicate(int arr[],int n){



    int lastDuplicate = -1;

    for(int i = 0; i<n; i++){

        if(arr[i] == arr[i+1] && arr[i] != lastDuplicate){
            cout<<"Duplicate: "<<arr[i]<<endl;
            lastDuplicate = arr[i];
        }

    }
}


void duplicate2(int arr[],int n){



    int j;

    for(int i = 0; i<n; i++){

        if(arr[i] == arr[i+1]){

            j = i + 1;
            while(arr[j] == arr[i]) j++;

            cout<<"Missing element: "<<arr[i]<<" "<<j-i<<" times"<<endl;
            i = j-1;

        }

    }
}
void duplicate3(int arr[],int n){



    

    for(int i = 0; i<n; i++){

        int count = 1;

        if(arr[i] != -1){


            for(int j = i+1; j<n; j++){

                if(arr[j] == arr[i]){
                    count++;
                    arr[j] = -1;
                }


            }


        }

        if(count>1){
            cout<<"Dupliacte: "<<arr[i]<<" times: "<<count<<endl;
        }
        

    }
}









int main(){

    





    return 0;
}