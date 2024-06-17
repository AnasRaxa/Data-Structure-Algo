#include <bits/stdc++.h>
using namespace std;



int main(){

    int nums[] = {1,2,4,6,8};
    int find = 7;

    int n = sizeof(nums)/sizeof(nums[0]);


    int start = 0, end = n-1, mid;
    int index = n;

    while(start<=end){
        mid = start + (end-start)/2;
        if(nums[mid]==find){
            index = mid;
            break;
        }
        else if(nums[mid]>find){
            index = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }


cout<<index;


    return 0;
}