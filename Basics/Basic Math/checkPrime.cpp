#include <bits/stdc++.h>
using namespace std;


void checkPrime(int n){

    int count = 0;

    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(i!=n/i){
                count++;
            }
        }
    }

    if(count == 2) cout<<"Prime No";
    else cout<<"Not Prime";

}


int main(){

    
    checkPrime(8);




    return 0;
}