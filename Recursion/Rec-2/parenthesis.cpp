#include <bits/stdc++.h>
using namespace std;


void subSeq(int left, int right,int n,string& temp, vector<string>& ans){


    if(left + right == 2*n){
        ans.push_back(temp);
        return;
    }

    if(left<n){
        temp.push_back('(');
        subSeq(left+1,right,n,temp,ans);
        temp.pop_back();
    }
    if(right<left){
        
        temp.push_back(')');
        subSeq(left,right+1,n,temp,ans);
        temp.pop_back();

    }

    
}



int main(){

    
    vector<string>ans;
    string temp;

    subSeq(0,0,3,temp,ans);

    for(int i = 0;i<ans.size(); i++){

        cout<<ans[i];

        cout<<endl;

    }





    return 0;
}