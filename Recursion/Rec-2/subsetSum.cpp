#include <bits/stdc++.h>
using namespace std;


void subSeq(int arr[],int start, int end,int sum,int target,vector<int>temp, vector<vector<int>>& ans){


    if(start == end){
        if(sum == target){
            ans.push_back(temp);
        }
        return;
    }

    subSeq(arr,start+1,end,sum,target,temp,ans);

    sum+=arr[start];
    temp.push_back(arr[start]);

    subSeq(arr,start+1,end,sum,target,temp,ans);

    
}



int main(){

    int arr[] = {3,6,4,5};
    vector<vector<int>>ans;
    vector<int>temp;
    subSeq(arr,0,4,0,12,temp,ans);

    for(int i = 0;i<ans.size(); i++){

        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }

        // cout<<endl;

    }





    return 0;
}