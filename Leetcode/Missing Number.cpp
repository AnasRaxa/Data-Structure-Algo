class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n+1,-1);
        for(int i =0;i<nums.size();i++){
            v[nums[i]] = nums[i];
        }
        for(int i =0;i<v.size();i++){
            if(v[i]==-1)return i;
        }
        return 0;
    }
};















class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        
        sort(nums.begin(),nums.end());

        int result = n;


        int start = 0;
        int end = n-1;
        int mid;


        while(start<=end){

            mid = start + (end - start)/2;

            if(nums[mid] > mid){
                result = mid;
                 end = mid -1;

            }
            else{

                start = mid + 1;
            }


        }

    return result;

        
    }
}; 








// sol 2

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =1;i<=n;i++){
            ans = ans ^ i;
        }
        for(int i =0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        return ans;
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int Tsum = (n*(n+1))/2;
        return  Tsum - accumulate(nums.begin(),nums.end(),0);
        
    }
}; 


