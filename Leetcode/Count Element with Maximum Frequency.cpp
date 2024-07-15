class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int>mp;


        int freq = 0;
        int count = 0;

        for(auto x:nums){
            mp[x]++;
            if(mp[x]>freq){
                freq = mp[x];
                count = freq;
            }else if(mp[x] == freq) count+=freq;
        }

        return count;
        
    }
};