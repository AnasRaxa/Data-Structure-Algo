#include <bits/stdc++.h>
using namespace std;


void calcSum1(int n,int sum){

    if(n<1){
        cout<<sum;
        return;
    }

    calcSum1(n-1,sum+n);


}
int calcSum2(int n){
    
    if(n==0) return 0;
    
    return n+calcSum2(n-1);



}



int main(){

    
    cout<<calcSum2(5);




    return 0;
}