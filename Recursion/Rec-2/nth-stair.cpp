#include <bits/stdc++.h>
using namespace std;

int ways(int n){

    if(n==1) return 1;
    else if(n==2) return 2;
    

    int ans = ways(n-1) + ways(n-2);

    return ans;



}

int main(){

    
    cout<<ways(4);




    return 0;
}