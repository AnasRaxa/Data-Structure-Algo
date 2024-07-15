class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int>st(begin(nums1),end(nums1));

        for(auto x:nums2){
            if(st.find(x) != st.end()) return x;
        }

        return -1;
        
    }
};






class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {


        for(int x:nums1){


            int start = 0;
            int end = nums2.size()-1;
            int mid;


            while(start<=end){
                
                mid = (start + end)/2;

                if(nums2[mid] == x) return x;
                else if(nums2[mid] < x) start = mid + 1;
                else end = mid - 1;

            }



        }

        

        return -1;
        
    }
};







class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {


       int i = 0, j = 0;


       while(i<nums1.size() && j<nums2.size()){

            if(nums1[i] == nums2[j]) return nums1[i];
            else if(nums1[i] < nums2[j]) i++;
            else j++;

       }

        

        return -1;
        
    }
};