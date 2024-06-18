#include <bits/stdc++.h>
using namespace std;



int main(){

    vector<int> piles = {3,6,7,11};

    int h = 8;

    int n = piles.size();

    int start = 0,end = 0, ans ,mid;

    for(int i : piles){
        end = max(end,i);
        start+=i;
    }
    start/=h;


    while(start<=end){
        mid = start + (end - start)/2;

        
        int times= 0;

        for(int i = 0; i<n; i++){
            times+=piles[i]/mid;
            if(piles[i]%mid)
                times++;
        }

        if(times>h){
            start = mid + 1;
        }else{
            ans = mid;
            end = mid -1 ;
        }

    }


cout<<ans;


    return 0;
}