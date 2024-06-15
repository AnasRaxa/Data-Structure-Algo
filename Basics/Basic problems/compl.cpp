#include <bits/stdc++.h>
using namespace std;

int calcCompl(int n){
    if(n==0) return 1;

    int rem,res = 0,mul=1;
    
    while(n>0){
        
        rem = n%2;
        rem = rem^1;
        n=n/2;
        res = res+rem*mul;
        mul*=2;

    }
    return res;

}

int main(){

    
    cout<<calcCompl(5);




    return 0;
}