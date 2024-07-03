#include <bits/stdc++.h>
using namespace std;


double taylor(int x, int n){


    static double p = 1;
    static double f = 1;

    if(n==0) return 1;

    double r;

    r = taylor(x,n-1);

    p = p*x;
    f = f*n;


    return r+ p/f;



}
double taylor2(int x, int n){


    static double s = 1;

    for(n; n>0; n--){
        
        s = s* x/n + 1;

    }

    return s;

}
double taylor3(int x, int n){


    static double s = 1;

    if(n == 0) return s;
    
     s= s* x/n + 1;

     return taylor3(x,n-1);

}



int main(){

    

    cout<<taylor3(1,10);



    return 0;
}