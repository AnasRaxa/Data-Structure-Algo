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


bool checkPalindrome(int n){
    
    int reverse_no = reverseNo(n);

    return (reverse_no == n ? true : false);
}





int main(){

    
    cout<<( (checkPalindrome(122)) ? "is Palindrome" : "not Palindrome");

    



    return 0;
}