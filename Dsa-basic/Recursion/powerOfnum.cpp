#include <bits/stdc++.h>
using namespace std;

int pow(int n,int p){

    if(p==0) return 1;

    return n*pow(n,p-1);



}
int pow2(int n,int p){

    if(p==0) return 1;

   if(p%2==0){
        return pow2(n*n,p/2);
   }else{
        return n*pow2(n*n,(p-1)/2);
   }



}



int main(){

    

    cout<<pow2(2,5);



    return 0;
}