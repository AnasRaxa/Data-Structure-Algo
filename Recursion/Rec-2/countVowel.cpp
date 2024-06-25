#include <bits/stdc++.h>
using namespace std;

int countV(string &s,int n){

    if(n==-1) return 0;

    if(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u'){
        return 1 + countV(s,n-1);
    }else{
        countV(s,n-1);
    }


}




int main(){

    string a = "anas";

    cout<<countV(a,3);



    return 0;
}