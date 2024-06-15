#include <bits/stdc++.h>
using namespace std;

    bool chkWin(int n){
        if(n%4==0){
            return false;
        }
        else{
            return true;
        }
    }

int main(){

    

    cout<<chkWin(7);



    return 0;
}