#include <bits/stdc++.h>
using namespace std;



void chkSqr(int n){

    int sqr = 0;

    for(int i = 1; i*i<=n; i++){
        sqr = i;
    }

    cout<<sqr;

}


int main(){

    
    chkSqr(103);




    return 0;
}