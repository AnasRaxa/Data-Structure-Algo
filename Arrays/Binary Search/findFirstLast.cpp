#include <bits/stdc++.h>
using namespace std;



int main(){

    int nums[] = {3,2,5,5,5,5,9,3};
    int n = sizeof(nums)/sizeof(nums[0]);


    int start = 0, end = n-1, first = -1, last = -1, mid;

    int target = 5;

// find first occurence
    while(start<=end){
        mid = start + (end-start)/2;

        if(nums[mid] == target){
            first = mid;
            end = mid -1;
        }else if(nums[mid]<target){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }


// find last occurence

    start = 0; end = n-1;
    while(start<=end){
        mid = start + (end-start)/2;
        if(nums[mid] == target){
            last = mid;
            start = mid  + 1;
        }else if(nums[mid]<target){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }

    cout<<first<<" "<<last;



    return 0;
}