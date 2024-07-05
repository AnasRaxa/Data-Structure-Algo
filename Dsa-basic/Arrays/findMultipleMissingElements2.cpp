#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {3,7,4,9,12,6,1,11,2,10};
    int n = 10, lower = 1, heigher = 12;
    

    vector<int>temp(heigher,0);



    for(int i = 0; i<n; i++){
        temp[arr[i]]++;
    }

    for(int i = 1; i<temp.size(); i++){

        if(temp[i] == 0){
            cout<<"Missing element: "<<i<<endl;
        }

    }





    return 0;
}