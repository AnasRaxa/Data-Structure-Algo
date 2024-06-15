#include <bits/stdc++.h>
using namespace std;

int calcFact(int n){
    
    if(n==1) return 1;
    
    return n*calcFact(n-1);


}

int main(){

    

    cout<<calcFact(3);



    return 0;
}