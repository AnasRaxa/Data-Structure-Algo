class Solution {
public:
    bool makeEqual(vector<string>& words) {

        unordered_map<char,int>mp;


        for(string ch:words){

            for(char s:ch){
                mp[s]++;
            }

        }


        for(auto c:mp){
            if(c.second % words.size() != 0) return false;
        }

        return true;
        
    }
};







class Solution {
public:
    bool makeEqual(vector<string>& words) {

        int count[26] = {0};


        for(string ch:words){

            for(char s:ch){
                count[s-'a']++;
            }

        }

        auto lambda = [&](int freq){
            return freq%words.size() == 0;
        };

        return all_of(begin(count),end(count), lambda);

        return true;
        
    }
};