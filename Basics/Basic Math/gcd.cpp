#include <bits/stdc++.h>
using namespace std;



int gcd1(int a,int b){
    int gcd = 1;
    for(int i =1; i<min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int gcd2(int a,int b){
    int gcd = 1;
    for(int i = min(a,b); i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd = i;
            break;
        }
    }
    return gcd;
}
int gcd3(int a,int b){
    
    while(a>0){
        if(a<b) swap(a,b);
        
         a = a-b;
         b = b;

        

    }
    return b;

}
int gcd5(int a,int b){
    
    while(a>0 && b>0){
        if(a>b) a=a-b;
        else    b=b-a;

        

    }
    if(a==0) return b;
    return a;

}
//better version
int gcd4(int a,int b){
    
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b=  b%a;
    }
    if(a==0) return b;
    return a;

}
int gcd42(int a,int b){
    
    while(a>0){
        if(a<b) swap(a,b);
        
        a = a%b;

    }

    return b;

}
int gcd6(int a,int b){
    
    if(a==0) return b;
    gcd6(max(a,b)-min(a,b),min(a,b));

}


int main(){

    cout<<gcd42(48,72);





    return 0;
}