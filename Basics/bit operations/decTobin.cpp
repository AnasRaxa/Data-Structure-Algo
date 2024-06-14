#include <bits/stdc++.h>
using namespace std;

int decToBin1(int n){

    int rem,res = 0,mul=1;
    
    while(n>0){
        
        rem = n&1;
        n=n>>1;
        res = rem*mul+res;
        mul*=10;

    }
return res;

}

int main(){

    cout<<decToBin1(3);





    return 0;
}