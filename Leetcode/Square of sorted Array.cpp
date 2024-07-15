class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        for(int i  = 0; i<n; i++){

            nums[i] = nums[i]*nums[i];

        }

        sort(nums.begin(),nums.end());


        return nums;
        
    }
};


















class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        vector<int>temp(n);

        int i = 0, j = n-1, k = n-1;

    int a,b;

        while(k>=0){

            a = nums[i]*nums[i];
            b = nums[j]*nums[j];

            if(a>b){
                temp[k] = a;
                i++;
            }else{
                temp[k] = b;
                j--;
            }

            k--;

        }

return temp;

        
    }
};