#include <bits/stdc++.h>
using namespace std;



int main(){

    string str = "abc";

    string rev = str;
        reverse(rev.begin(),rev.end());
        int size = rev.size();
        
        
        str+='$';
        str+=rev;
        
        vector<int>lps(str.size(),0);
        
        
        int pre = 0 , suf = 1;
        
        while(suf<str.size()){
            
            if(str[pre] == str[suf]){
                
                lps[suf] = pre + 1;
                
                pre++ , suf++;
                
            }else{
                
                if(pre == 0){
                    suf++;
                }else{
                    
                    pre = lps[pre-1];
                }
                
            }
            
            
        }
        
        
        int ans = size - lps[str.size()-1];
        
        return ans;





    return 0;
}