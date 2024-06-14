#include <bits/stdc++.h>
using namespace std;

    int countDigit(int n){
        int count{0};
        
        while(n>0){
            count++;
            n/=10;
        }

        return count;
    }
    int calcPower(int n,int pow){
        int result = n;

        while(pow>1){
            result = result * n;
            pow--;
        }
        
    return result;

    }


    bool checkArm(int n){

        int dup = n;

        int power = countDigit(n);
        int result{0};

        while(n>0){
            
            int digit = n%10;

            result+= calcPower(digit,power);


            n/=10;

        }

    return (dup == result ? true : false);


    }


int main(){

    cout<<(checkArm(1634)?"is armstrong":"not armstrong");

    



    return 0;
}