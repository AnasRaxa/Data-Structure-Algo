#include <bits/stdc++.h>
using namespace std;



int main(){

    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    vector<bool>ans(26,0);
        for(int i = 0; i<sentence.size(); i++){
            ans[sentence[i]-'a'] = 1;
        }
        for(int i = 0; i<26; i++){
            if(ans[i]==0){
                return false;
            }
        }





    return 0;
}