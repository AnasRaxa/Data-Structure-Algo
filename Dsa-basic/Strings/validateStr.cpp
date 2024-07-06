#include <bits/stdc++.h>
using namespace std;



int main(){

    char c[] = "hel7&o0";

    for(int i = 0; c[i]!='\0'; i++){


        if(
            !(c[i]>=65 && c[i]<=90) && !(c[i]>=97 && c[i]<=122) && !(c[i]>=48 && c[i]<=57)
        ) return 0;


    }

    return 1;



    return 0;
}