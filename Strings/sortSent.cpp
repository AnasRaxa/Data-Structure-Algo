#include <bits/stdc++.h>
using namespace std;



int main(){

    string s = "is2 sentence4 This1 a3";

        vector<string>ans(10);

        string temp;
        int index = 0,count = 0;

        while(index<s.size()){

            if(s[index] == ' '){

                int pos = temp[temp.size()-1]-'0';
                temp.pop_back();

                ans[pos] = temp;
                temp.clear();
                count++;
                

            }else{
                temp+=s[index];
            }

            index++;

        }

         int pos = temp[temp.size()-1]-'0';
                temp.pop_back();

                ans[pos] = temp;
                temp.clear();
                count++;


        
        for(int i = 1; i<=count; i++){
            temp+=ans[i];
            temp+=' ';
        }




temp.pop_back();


// return temp;





    return 0;
}