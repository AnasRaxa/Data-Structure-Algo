#include <bits/stdc++.h>
using namespace std;


void subSeq(string s,int start, int end,string& temp, vector<string>& ans){


    if(start == end){
        ans.push_back(temp);
        return;
    }

    subSeq(s,start+1,end,temp,ans);

    temp.push_back(s[start]);

    subSeq(s,start+1,end,temp,ans);

    temp.pop_back();

    
}



int main(){

    string s = "abc";
    vector<string>ans;
    string temp;

    subSeq(s,0,s.size(),temp,ans);

    for(int i = 0;i<ans.size(); i++){

        cout<<ans[i];

        cout<<endl;

    }





    return 0;
}