#include <bits/stdc++.h>
using namespace std;

void capital(string &s,int n){

    if(n==-1) return;


    s[n] = 'A' + s[n] - 'a';

    capital(s,n-1);



    


}




int main(){

    string a = "anas";

    capital(a,3);

    cout<<a;



    return 0;
}