#include <bits/stdc++.h>
using namespace std;



int reverseInteger(int n){

    int rem,res = 0;

    while(n){
        
        rem = n%10;
        if(res>INT_MAX/10 || res < INT_MIN/10) return 0;
        res = res*10 + rem;
        n/=10;

    }

    return res;


}



int main(){

    
    cout<<reverseInteger(236789);




    return 0;
}