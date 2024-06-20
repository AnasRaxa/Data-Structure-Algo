#include <bits/stdc++.h>
using namespace std;



int main(){

    vector<int>nums = {2,2,1,1,1,2,2};

    int n = nums.size();

        int candidate,count = 0;

        for(int i = 0; i<n; i++){

            if(count == 0){
                candidate = nums[i];
                count++;
            }else{
                if(nums[i] == candidate)
                count++;
                else
                count--;
            }

        }

        return candidate;





    return 0;
}