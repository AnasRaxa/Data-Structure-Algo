#include <bits/stdc++.h>
using namespace std;




bool srch(int* arr,int n,int ele){


    if(n == -1) return 0;

    if(arr[n] == ele) return 1;

   return srch(arr,n-1,ele);

    


}



int main(){

    int arr[] = {1,2,3,4,5};

    int n  = sizeof(arr)/sizeof(arr[0]);

    cout<<srch(arr,n-1,5);








    return 0;
}