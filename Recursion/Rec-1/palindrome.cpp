#include <bits/stdc++.h>
using namespace std;

bool chkPalindrome(string &c,int i){
    if(i>=c.size()/2) return true;
    if(c[i] == c[c.size()-i-1]){
        chkPalindrome(c,i+1);
    }else{
        return false;
    }
}


int main(){

    string c = "racecar";
    cout<<chkPalindrome(c,0);





    return 0;
}