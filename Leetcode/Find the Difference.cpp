// https://leetcode.com/problems/find-the-difference/



class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char,int>mp;

        char miss;

        for(auto x:s){
            mp[x]++;
        }

        for(auto x:t){
            if(mp.count(x)){

                    if(mp[x]<1) miss = x;
                    mp[x]--;
            }else{
                miss = x;
            }
        }

        return miss;
    }
};





// sol 2


class Solution {
public:
    char findTheDifference(string s, string t) {

        int sum1 = 0;
        int sum2 = 0;

        for(auto x:s) sum1+=x;
        for(auto x:t) sum2+=x;

        return char(sum2-sum1);

       
    }
};



// sol 3


class Solution {
public:
    char findTheDifference(string s, string t) {

        int ans = 0;

        for(auto x:s) ans^=x;
        for(auto x:t) ans^=x;

        return ans;

       
    }
};