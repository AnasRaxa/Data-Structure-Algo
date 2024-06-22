#include <bits/stdc++.h>
using namespace std;





string haystack = "sadbutsad", needle = "sad";
     int strStr(string haystack, string needle) {

        int n = haystack.size(), m = needle.size();

        for(int i = 0; i<=n-m; i++){
            int first = i , second = 0;
            
            while(second<m){

                if(haystack[first] != needle[second]){
                    break;
                }else{
                    first++, second++;
                }

            }

            if(m == second){
                return first - second;
            }

        }
         
        return -1;





    return 0;
}