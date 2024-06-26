#include <bits/stdc++.h>
using namespace std;


int winner(vector<bool>&person,int index,int n,int k,int personLeft){

    if(personLeft == 1){
        for(int i = 0; i<n; i++){
            if(person[i] == 0) return i;
        }
    }


    int kill = (k-1)%personLeft;


    while(kill--){
        
        index = (index+1)%n;
        while(person[index] == 1){
            index = (index+1)%n;
        }

    }

    person[index] = 1;

    while(person[index] == 1){
        index = (index+1)%n;
    }

    return winner(person,index,n,k,personLeft-1);


}



int main(){

    
    vector<bool>person(5,0);
    int n = 5, k = 3,index = 0,personLeft = 5;

    cout<<winner(person,index,n,k,personLeft);




    return 0;
}