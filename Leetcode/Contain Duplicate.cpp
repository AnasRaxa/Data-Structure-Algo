class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {


        unordered_map<int,int> mp;


        for(auto x:nums){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second>1) return true;
        }


        return false;

        
    }
};







class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {


        unordered_map<int,int> mp;


        for(auto x:nums){
            mp[x]++;
            if(mp[x]>1) return true;
        }

        
        return false;

        
    }
};












class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};