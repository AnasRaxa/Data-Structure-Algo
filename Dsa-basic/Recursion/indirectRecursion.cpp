#include <bits/stdc++.h>
using namespace std;

void fun2(int);

void fun1(int n){

    if(n<=0) return;

    cout<<n<<endl;

    fun2(n-1);

}
void fun2(int n){

    if(n<=1) return;

    cout<<n<<endl;

    fun1(n/2);

}


int main(){

    
    fun1(20);




    return 0;
}