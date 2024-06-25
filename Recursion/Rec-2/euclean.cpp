#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){

    if(a == 0) return b;

    if(b>a) swap(a,b);

    gcd(a%b,b);

}



int gcd2(int a, int b){

    if(b==0) return a;

    return (b,a%b);



}


int main(){

    
    cout<<gcd2(18,48);




    return 0;
}