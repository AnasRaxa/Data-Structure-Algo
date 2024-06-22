#include <bits/stdc++.h>
using namespace std;


bool chk(string& s, char c){
    for(int i = 0; i<s.size(); i++){
        if(s[i] == c){
            return true;
        }
    }
    return false;
}



int main(){

string  s = "pwwkew";
    

        int maxlen = 0;

        for(int i = 0; i<s.size(); i++){

            int len = 0;
            string temp;

            for(int j =i; j<s.size(); j++){
                if(chk(temp,s[j]) == false){
                    
                    len++;
                    temp+=s[j];
                }else{
                    if(len>maxlen){
                    maxlen = len;
                    break;

                    }
                }
            }

        }

        return maxlen;





    return 0;
}