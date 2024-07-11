// sol 1


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int x,y;

        unordered_map<int,int>mp;
        vector<int>ans;

        for(int i = 0; i<nums.size(); i++){
            
            x = nums[i];
            y = target - x;

            if(mp.count(y)){
                ans.push_back(mp[y]);
                ans.push_back(i);
                break;
            }


            mp[x] = i;

        }

        return ans;
        
    }
};






//  sol 2


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>ans;

        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }

        return ans;
        
    }
};