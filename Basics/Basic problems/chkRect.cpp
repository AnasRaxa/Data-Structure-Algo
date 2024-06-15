#include <bits/stdc++.h>
using namespace std;


void checkRect(int a, int b, int c, int d){
    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)) cout<<"Rectangle";
    else cout<<"Not Rectangle";
}


int main(){

    checkRect(15,30,15,30);





    return 0;
}