#include <bits/stdc++.h>
using namespace std;


void permute(vector<int>&arr,int index,vector<vector<int>>&ans){

    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i = index; i<arr.size(); i++){
        
        swap(arr[index],arr[i]);
        permute(arr,index+1,ans);
        swap(arr[index],arr[i]);


    }




}



int main(){

    vector<int> arr = {1,2,3};

    
    vector<vector<int>>ans;

    permute(arr,0,ans);


    for(int i = 0; i<ans.size(); i++){
        for(int j= 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }







    return 0;
}