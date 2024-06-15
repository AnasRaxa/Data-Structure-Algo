#include <bits/stdc++.h>
using namespace std;


void checkPow(int n){
    int div = 2;
    while(div<=n){
        if(div==n){
            cout<<"in Power";
            return;
        }
        div*=2;
    }
    cout<<"not in power";

}
void checkPow2(int n){
    
    if(n<1) cout<< "Not Power";

    while(n!=1){
        
        if(n%2==1){
            cout<<"Not power";
            return;
        }else{
            n/=2;
        }

    }
    cout<<"in Power";
}


int main(){

    
    checkPow(65);




    return 0;
}