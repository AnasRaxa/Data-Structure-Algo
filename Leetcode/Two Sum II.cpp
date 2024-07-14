class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int>sum;
        int start = 0, end = n-1;

    while(start<end){

        if(arr[start] + arr[end] == target){
            sum.push_back(start+1);
            sum.push_back(end+1);
            break;
        }
        else if (arr[start] + arr[end] < target){
            start++;
        }else{
            end--;
        }

    }
    return sum;
    }
};