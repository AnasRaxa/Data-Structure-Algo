#include <bits/stdc++.h>
using namespace std;



bool chkPalindrome(string &str,int i){

    if(i>=str.size()/2){
        return true;
    }


    if(str[i] == str[str.size()-i-1]){
        return chkPalindrome(str,i+1);
    }else{
        return false;
    }




}
bool chkPalindrome2(string &str,int start, int end){

    if(start >= end){
        return true;
    }


    if(str[start] == str[end]){
        return chkPalindrome2(str,start+1,end-1);
    }else{
        return false;
    }




}



int main(){

    string str = "racecar";

    cout<<chkPalindrome2(str,0,str.size()-1);





    return 0;
}