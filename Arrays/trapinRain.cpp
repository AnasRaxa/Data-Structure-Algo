#include <bits/stdc++.h>
using namespace std;



int main(){

   vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

        int n = height.size();

        int water = 0,maxHeight = height[0],leftMax = 0,rightMax = 0,index = 0;

        for(int i = 1; i<n; i++){
            if(height[i]>maxHeight){
                maxHeight = height[i];
                index = i;
            }
        }


        for(int i = 0; i<index; i++){
            if(leftMax>height[i]){
                water += leftMax - height[i];
            }else{
                leftMax = height[i];
            }
        }

        for(int i = n-1; i>index; i--){
            if(rightMax>height[i]){
                water += rightMax - height[i];
            }else{
                rightMax = height[i];
            }
        }

    return water;





    return 0;
}