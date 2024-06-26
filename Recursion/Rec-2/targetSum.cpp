#include <bits/stdc++.h>
using namespace std;


void subSeq(int arr[],int start, int end,vector<int> temp, vector<vector<int>>& ans){


    if(start == end){
        ans.push_back(temp);
        return;
    }

    subSeq(arr,start+1,end,temp,ans);

    temp.push_back(arr[start]);

    subSeq(arr,start+1,end,temp,ans);

    
}



int main(){

    int arr[] = {1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    subSeq(arr,0,3,temp,ans);

    for(int i = 0;i<ans.size(); i++){

        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;

    }





    return 0;
}