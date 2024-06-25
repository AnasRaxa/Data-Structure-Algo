#include <bits/stdc++.h>
using namespace std;



void swapS(string &str,int i){

    if(i>=str.size()/2){
        return;
    }


    swap(str[i],str[str.size()-i-1]);

    swapS(str,i+1);






}
void swap2(string &str,int start, int end){

    if(start >= end){
        return;
    }


    swap(str[start],str[end]);

    swap2(str,start+1,end-1);




}



int main(){

    string str = "anas";

    swapS(str,0);

    cout<<str;





    return 0;
}