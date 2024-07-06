#include <bits/stdc++.h>
using namespace std;


void checkDiagonal(int matrix[][5],int n){

        for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){

            if(i==j){
                if(matrix[i][j] == 0){
                    cout<<"Not diagonal\n";
                    return;
                }
            }else{
                    if(matrix[i][j]!=0){
                        cout<<"Not diagonal\n";
                        return;
                    }
            }

        }
        
    }

    cout<<"Diagonal\n";
    


}

void set(int arr[],int i,int j, int x){

    if(i==j){

        arr[i] = x;

    }

}
int get(int arr[],int i,int j){

    if(i==j){

        return arr[i];

    }else{
        return 0;
    }

}

void display(int matrix[],int n){

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){

            if(i==j) cout<<matrix[i]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }

}













int main(){

    int matrix[5][5] = {
                            1,0,0,0,0,
                            0,1,0,0,0,
                            0,0,1,0,0,
                            0,0,0,1,0,
                            0,0,0,0,1
    };

    // all diagonal elemnt are 0
    // matrix[i][j] == 0 if(i!=j)
    // we can represent non zero ele of diagonal elemnt in single 1 dimensional array


    int arr[] = {1,1,1,1,1};
    display(arr,5);







    return 0;
}   