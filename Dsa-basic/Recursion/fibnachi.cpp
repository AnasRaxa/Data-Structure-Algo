#include <bits/stdc++.h>
using namespace std;


int fibo(int n){


    if(n==0) return 0;
    if(n==1) return 1;

    return fibo(n-1)+fibo(n-2);


}

vector<int>f(50,-1);

int fibo2(int n){


    if(n<=1){
        f[n] = n;
        return n;
    }else{

        if(f[n-2] == -1){
            f[n-2] = fibo2(n-2);
        }
        if(f[n-1] == -1){
            f[n-1] = fibo2(n-1);
        }


        return f[n-2] + f[n-1];


    }

   


}



int main(){

    cout<<fibo2(5);





    return 0;
}