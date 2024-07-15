class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        int maxLen = -1;

        for(int i = 0; i<s.size()-1; i++){
            for(int j = i+1; j<s.size(); j++){

                if(s[i] == s[j]){
                    maxLen = max(maxLen,j-i-1);
                }

            }
        }

        return maxLen;
        
    }
};











class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        unordered_map<char,int>mp;

        int maxLen = -1;

        for(int i = 0; i<s.size(); i++){

            if(mp.count(s[i])){
                maxLen = max(maxLen, i - mp[s[i]]-1);
            }else{
                mp[s[i]] = i;
            }

        }

        

        return maxLen;
        
    }
};