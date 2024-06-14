#include <bits/stdc++.h>
using namespace std;



int reverseNo(int n){
    int reverse_no = 0;

    while(n>0){

        int digit = n%10;

        reverse_no = reverse_no*10+digit;

        n/=10;

    }

    return reverse_no;
    

}


int main(){

    

    cout<< reverseNo(12345);



    return 0;
}