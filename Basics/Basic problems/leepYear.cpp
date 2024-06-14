#include <bits/stdc++.h>
using namespace std;

void checkLeap(int n){
    
    if(n%400==0) cout<<"Leap Year\n";
    else{
        if(n%4==0 && n%100!=0){
            cout<<"Leap Year\n";
        }
        else cout<<"Not Leap Year\n";
    }


}

int main(){

    checkLeap(1600);





    return 0;
}