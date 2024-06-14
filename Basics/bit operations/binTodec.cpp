#include <bits/stdc++.h>
using namespace std;


int binTodec(int n){

    int res=0 , rem,mul = 1;

    while(n>0){

        rem = n%10;

        if(rem!=0){

            res += rem*mul; 

        }

        mul*=2;
        n/=10;

    }
    return res;


}



int main(){

    

    cout<<binTodec(11);



    return 0;
}