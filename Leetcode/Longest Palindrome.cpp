class Solution {
public:
    int longestPalindrome(string s) {


        vector<int>upper(26,0);
        vector<int>lower(26,0);
        
        for(int i = 0; i<s.size(); i++){ 
            if(s[i]>='a'){
                lower[s[i]-'a']++;
            }else{ 
                upper[s[i]-'A']++;
            } 
        }

        int count = 0;
        int odd = 0;

        for(int i = 0; i<26; i++){

            if(lower[i]%2==0){
                count+=lower[i];
            }else{
                count+=lower[i]-1;
                odd = 1;
            }

        }
        for(int i = 0; i<26; i++){

            if(upper[i]%2==0){
                count+=upper[i];
            }else{
                count+=upper[i]-1;
                odd = 1;
            }

        }

        count += odd;

        return count;
            
        
    }
};













class Solution {
public:
    int longestPalindrome(string s) {


        unordered_map<char,int>mp;

        int result = 0;
        int odd = 0;


        for(auto ch:s){
            mp[ch]++;
        }

        for(auto ch:mp){
            if(ch.second%2==0){
                result+=ch.second;
            }else{
                result+=ch.second-1;
                odd = 1;
            }
        }

        result += odd;

        return result;
            
        
    }
};














class Solution {
public:
    int longestPalindrome(string s) {


        unordered_map<char,int>mp;

        int n = s.size();
        int odd = 0;


        for(auto ch:s){
            mp[ch]++;

            if(mp[ch]%2!=0) odd++;
            else{
                mp[ch]=0;
                odd--;
            }

        }

        if(odd){
            return n-odd+1;
        }

        return n-odd;
            
        
    }
};