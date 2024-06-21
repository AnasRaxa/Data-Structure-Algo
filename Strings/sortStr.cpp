#include <bits/stdc++.h>
using namespace std;



int main(){

    string s = "cebdep";
        string ans;
        vector<int>arr(26,0);
        for(int i = 0; i<s.size(); i++){
            arr[s[i]-'a']++;
        }
        for(int i = 0; i<26; i++){
            
            char c= 'a'+i;
            
            while(arr[i]){
                ans+=c;
                arr[i]--;
            }   
        }
    




    return 0;
}