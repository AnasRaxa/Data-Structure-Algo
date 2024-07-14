class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int>temp(m+n,0);


        int i = 0, j = 0,k = 0;

        while(i<m && j<n){

            if(nums1[i]<nums2[j]){
                temp[k++] = nums1[i++];
            }else{
                temp[k++] = nums2[j++];
            }

        }

        while(i<m){
            temp[k++] = nums1[i++];
        }
        while(j<n){
            temp[k++] = nums2[j++];
        }


        i = 0;
        j = 0;

        while(i<temp.size()){
            nums1[j++] = temp[i++];
        }
        

        
    }
};






// sol 2


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }

        while(i>=0){
            nums1[k--] = nums1[i--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
        
        
        
    }
};





// sol 3


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(j>=0){
            if(i>=0  && nums1[i]>nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }

       
        
        
        
    }
};