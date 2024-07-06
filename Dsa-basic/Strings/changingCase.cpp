#include <bits/stdc++.h>
using namespace std;



int main(){

    char c[] = "hello";

    for(int i = 0 ; c[i]!='\0'; i++){
        c[i] = c[i]-32;
    }

    

    // cout<<c;


    char a[] = "weLcOmE";

    for(int i = 0; a[i] != '\0'; i++){

        if(a[i] >= 'a'){
            a[i] = a[i]-32;
        }else{
            a[i] = a[i]+32;
        }

    }

    cout<<a;





    return 0;
}