#include <bits/stdc++.h>
using namespace std;


int fact(int n){

    if(n==1) return 1;

    return n * fact(n-1);



}

int ncr1(int n,int r){

    // formula = n!/(r!*n-r!)

    int num,den;

    num = fact(n);
    den = fact(r) * fact(n-r);

    return num/den;



}

// pascal triangle

int ncr2(int n,int r){

    if(r==0 || n==r) return 1;
    else{

        return ncr2(n-1,r-1) + ncr2(n-1,r);

    }



}



int main(){

    
    cout<<ncr2(5,2);




    return 0;
}