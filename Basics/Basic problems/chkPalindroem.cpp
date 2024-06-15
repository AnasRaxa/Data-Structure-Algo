#include <bits/stdc++.h>
using namespace std;


void chkPalind(int n){

    if(n<0) cout<<"Not Palindroem";
    int rev=0,rem,dup=n;

    while(n){
        rem = n%10;
        if(rev>INT_MAX/10) cout<<"invalid case:INT Overflow";
        rev = rev*10+rem;
        n/=10;
    }


    if(rev == dup) cout<<"Palindrome";
    else cout<<"Not Palindrome";



}


int main(){

    chkPalind(122);





    return 0;
}