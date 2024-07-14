class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
        
    }
};





class Solution {
public:
    bool isAnagram(string s, string t) {

       
       unordered_map<char,int>mp;

       for(auto c:s) mp[c]++;

       for(auto c:t){
            if(!mp.count(c)) return 0;
            else if(mp[c]<1) return 0;
            else{
                mp[c]--;
            }
       }

       for(auto c:mp){
            if(c.second>0) return 0;
       }


       return 1;



        
    }
};









