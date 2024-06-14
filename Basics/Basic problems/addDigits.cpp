#include <bits/stdc++.h>
using namespace std;


int addDigit(int num){


    

        while(num>9){
            int ans = 0;
            while(num!=0){
                ans+=num%10;
                num/=10;
            }

            

            num = ans;

        }

        cout<<num;
        return num;



}



int main(){

    
    addDigit(38);




    return 0;
}