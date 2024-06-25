#include <bits/stdc++.h>
using namespace std;

int sqr(int n){


    if(n == 1) return 1;
    
    int ans = n*n + sqr(n-1);

    return ans;


}

int main(){

    cout<< sqr(4);





    return 0;
}