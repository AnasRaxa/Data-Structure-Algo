#include <bits/stdc++.h>
using namespace std;


    string add(string& num1,string& num2){

        string ans;
        int sum, i = num1.size()-1, j = num2.size()-1,carry = 0;

        while(j>=0){
            
            sum = (num1[i]-'0') +( num2[j]-'0') + carry;

            carry = sum/10;

            char c = '0' + sum%10;
            
            ans += c;

            i--;
            j--;


        }


        while(i>=0){

            sum = num1[i]-'0' + carry;

            carry = sum/10;

            char c = '0' + sum%10;
            
            ans += c;

            i--;
        }

        if(carry){
            ans += '1';
        }

        reverse(ans.begin(),ans.end());

        return ans;
        


    }


int main(){

    string num1 = "11", num2 = "23";

    
            if(num1.size() > num2.size()){

            // return add(num1,num2);

        }else{

            // return add(num2,num1);

        }




    return 0;
}