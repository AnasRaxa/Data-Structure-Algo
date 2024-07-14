// https://leetcode.com/problems/intersection-of-two-arrays/description/







class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>mp;
        vector<int>ans;

        for(auto a:nums1){
            mp[a]++;
        }
        for(auto a:nums2){
            if(mp.count(a)){
                ans.push_back(a);
                mp.erase(a);
            }
        }

        return ans;
        
    }
};










// sol 2

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        sort(nums1.begin() , nums1.end());
        int m = nums2.size();
        sort(nums2.begin() , nums2.end());
        int i = 0 ; // iterates over nums1
        int j = 0 ; //iterates over nums2
        vector<int>result; // create vector for store result 
        while(i < n && j <m){ // iterate till anyone nums1 or nums2 get ends
            if(nums1[i]==nums2[j]){//if we find equal then store in result
              result.push_back(nums1[i]);
              while(i < n-1 && nums1[i] == nums1[i+1]){//we skip till we get different element
                  i++;//than last inserted in result cause we have to return unique 
              }
              while(j < m-1 && nums2[j] == nums2[j+1]){// same for nums2 also 
                  j++;
              }
              i++; // move both pointer after above operations
              j++;
            }
            else if(nums1[i] < nums2[j]){//we move pointer for which element is small 
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};