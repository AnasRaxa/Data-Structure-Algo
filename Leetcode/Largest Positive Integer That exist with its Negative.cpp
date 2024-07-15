class Solution {
public:
    int findMaxK(vector<int>& nums) {

        unordered_set<int>st;

        for(auto i:nums) st.insert(i);

        
        int res = -1;

        for(auto x:nums){
            if(st.find(-x) != st.end()){
                res = max(res,x);
            }
        }
return res;

        
    }
};











class Solution {
public:
    int findMaxK(vector<int>& nums) {

            sort(nums.begin(),nums.end());

            int i = 0;
            int j = nums.size()-1;


            while(i<j){

                if((-nums[i]) == nums[j]) return nums[j];
                else if((-nums[i]) > nums[j]) i++;
                else j--;
            }


            return -1;


        
    }
};












class Solution {
public:
    int findMaxK(vector<int>& nums) {

        unordered_set<int>st;
        int res = -1;

        for(int i = 0; i<nums.size(); i++){

            if(st.find(-(nums[i])) != st.end()){
                if(nums[i]>=1){
                    res = max(res,nums[i]);
                }else{
                    res = max(res,-nums[i]);
                }
                
            }else{
                st.insert(nums[i]);
            }

        }

        
return res;

        
    }
};















class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int result = -1;
   
        int arr[2001] = {0};

        for (int num : nums) {

            if (arr[-num + 1000] == 1)
                result = max(result, abs(num));

            // Mark the current number as seen
            arr[num + 1000] = 1;
        }

        return result;
    }
};