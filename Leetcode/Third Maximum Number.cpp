// https://leetcode.com/problems/third-maximum-number/






class Solution {
public:
 int thirdMax(vector<int>& nums) {
        if(nums.size()==1){           // when size of Array is 1
         return nums[0];   
        }
        if(nums.size()==2){           // When size of array is 2
            return max(nums[0],nums[1]);
        }
 // find First maximum element using *max_element() function
        int First_max=*max_element(nums.begin(),nums.end());   
	    int Second_max=INT_MIN;
        int Third_max=INT_MIN;
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(Second_max<nums[i] && nums[i]!=First_max){
                Second_max=nums[i];
                count1++;
            }
        }
// if Second maximum element does not exist return First maximum element
        if(count1==0) return First_max; 
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if((Third_max<nums[i] || nums[i]==INT_MIN) && ( nums[i]!=First_max &&  nums[i]!=Second_max)){
                Third_max=nums[i];
                count2++;
            }
        }
        if(count2>0){
            return Third_max;
        }else{
            return First_max;
        }
    }
};












class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int third_maximum=0;
        for(int i=nums.size()-1 ;i>0;i--){
            if(nums[i]!=nums[i-1]){
                count++;
                third_maximum=nums[i];
            }
           else if(i==1 && nums[i]==nums[i-1]){
                count++;
                third_maximum=nums[i];
            }
            if(count>2){
                 return third_maximum;
           }
        }
        if(count+1==3 && nums[0]!=nums[1]){
           return nums[0]; //if first and second index element not same [1,2,2,3]
        }
        return nums[nums.size()-1];  // if 3rd maximum not exist return maximum
    }
};