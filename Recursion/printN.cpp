#include <bits/stdc++.h>
using namespace std;


void print(int i,int n){
    

    if(i > n) return;
    cout<<i<<" ";

    
    
    print(i+1,n);



}
void print12(int i,int n){
    

    if(i > n) return;
    print12(i+1,n);

    cout<<i<<" ";
    
    



}
void print2(int n){
    

    if(n<1) return;

    cout<<n<<" ";
  
    print2(n-1);
    
}
void print3(int n){
    

    if(n<1) return;

    print3(n-1);
  
    cout<<n<<" ";
    
}



int main(){

    
    print12(1,6);




    return 0;
}