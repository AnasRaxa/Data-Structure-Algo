#include <bits/stdc++.h>
using namespace std;


int winner(int n, int k){


    if(n==1) return 0;
   
   return (winner(n-1,k)+k)%n;


}



int main(){

    
    

    cout<<winner(5,3);




    return 0;
}