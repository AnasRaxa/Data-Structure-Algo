#include <bits/stdc++.h>
using namespace std;



int main(){

    char a[] = "hello";


    int j;

    for(j = 0; a[j]!='\0'; j++){

    }
    j = j-1;

    int i = 0;

    while(i<j){

        swap(a[i],a[j]);
        i++;
        j--;

    }


cout<<a;


    return 0;
}