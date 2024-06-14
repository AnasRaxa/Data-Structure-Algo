#include <bits/stdc++.h>
using namespace std;


int countDigit(int n){
    int count{0};
    
    while(n>0){
        int lastDigit = n%10;
        count++;
        n/=10;
    }

    return count;

}
int countDigit2(int n){
    int count{0};
    
    count = log10(n)+1;

    return count;

}



int main(){

    cout<< countDigit2(123987);





    return 0;
}