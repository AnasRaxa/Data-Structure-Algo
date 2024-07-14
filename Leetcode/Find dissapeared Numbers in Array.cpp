// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> seen(size(nums)+1);
        vector<int> ans;

        for(auto c : nums) seen[c]=1;


        for(int i = 1; i <= size(nums); i++){

            if(seen[i]<1) ans.push_back(i);
            
        }
        return ans;
    }
};