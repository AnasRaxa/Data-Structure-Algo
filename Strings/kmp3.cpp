#include <bits/stdc++.h>
using namespace std;

 void lpsFind(vector<int>& lps,string needle){

        int first = 0, second = 1;

        while(second < needle.size()){

            if(needle[first] == needle[second]){
                
                lps[second] = first+1;

                first++;
                second++;
            }else{

                if(first == 0){

                    second++;

                }else{

                    first = lps[first-1];

                }
            }


        } 


    }

int main(){

    string haystack = "sadbutsad";
    string needle = "sad";


    vector<int>lps(needle.size(),0);


        lpsFind(lps,needle);

        int first = 0, second = 0;

        while(first<haystack.size() && second < needle.size()){

            if(haystack[first] == needle[second]){
                first++,second++;
            }else{
                if(second == 0){
                    first++;
                }else{
                    second = lps[second-1];
                }
            }

            


        }
        if(second == needle.size()){
                return first-second;
            }

            // return -1;





    return 0;
}