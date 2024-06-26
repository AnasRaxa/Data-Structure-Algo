#include <bits/stdc++.h>
using namespace std;


int way(vector<int>&arr,int m,int sum){


    if(sum==0) return 1;
    if(sum<0) return 0;
    
    int ans = 0;
    for(int i = 0; i<m; i++){

        ans+= way(arr,m,sum-arr[i]);


    }

    return ans;
        


}








int main(){

    vector<int> arr = {1,5,6};

    
    

    cout<<way(arr,3,7);


    







    return 0;
}