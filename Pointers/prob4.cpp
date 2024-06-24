#include <bits/stdc++.h>
using namespace std;



void second(int* p1, int* p2){
    p1 = p2;
    *p1 = 2;
}



int main(){



    int a = 5, b= 10;

    int &name = a;

    int* ptr = &a;

    (*ptr)++;

    ptr = &b;

    *ptr = *ptr + 5;

    name+=5;

    cout<<a<<" "<<b;
    





    return 0;
}