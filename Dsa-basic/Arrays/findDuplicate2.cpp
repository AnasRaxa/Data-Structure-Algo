#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {1,2,4,9,12,12,11,11,11,10};
    int n = 10, lower = 1, heigher = 12;
    

    vector<int>temp(heigher,0);



    for(int i = 0; i<n; i++){
        temp[arr[i]]++;
    }

    for(int i = 1; i<temp.size(); i++){

        if(temp[i] > 1){
            cout<<"Duplicate element: "<<i<<" And count is "<<temp[i]<<endl;
        }

    }





    return 0;
}