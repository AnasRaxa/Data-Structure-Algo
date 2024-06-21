#include <bits/stdc++.h>
using namespace std;



    void rotateclock(string &s){
        
        char c = s[s.size()-1];
        
        
        int index = s.size()-2;
        
        while(index>=0){
            
            s[index+1] = s[index];
            index--;
            
        }
        
        s[0] = c;
        
    }
    void rotateanticlock(string &s){
        
        char c = s[0];
        
        
        int index = 1;
        
        while(index<s.size()){
            
            s[index-1] = s[index];
            index++;
            
        }
        
        s[s.size()-1] = c;
        
    }



int main(){

       string str1 = "leetcode" , str2 = "deleetco";

        string clockwise = str1, anticlockwise = str1;
        
        rotateclock(clockwise);
        rotateclock(clockwise);
        
        if(str2 == clockwise){
            return 1;
        }
        
        
        rotateanticlock(anticlockwise);
        rotateanticlock(anticlockwise);
        
        if(str2 == anticlockwise){
            return 1;
        }
        





    return 0;
}