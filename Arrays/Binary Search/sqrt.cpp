#include <bits/stdc++.h>
using namespace std;



int main(){

    int n = 80;


    int start = 1, end = 80 ,mid, ans;
    while(start<=end){
        mid = start + (end - start)/2;
        if(mid*mid == n){
            ans = mid;
            break;
        }
        else if(mid*mid < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

cout<<ans;




    return 0;
}