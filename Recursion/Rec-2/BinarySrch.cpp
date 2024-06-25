#include <bits/stdc++.h>
using namespace std;




bool srch(int* arr,int ele,int start, int end){


    if(start>end) return 0;


    int mid = start + (end-start)/2;

    if(arr[mid] == ele) return 1;
    else if(arr[mid] > ele) return srch(arr,ele,start,mid-1);
    else return srch(arr,ele,mid + 1,end);



    


}



int main(){

    int arr[] = {1,2,3,4,5};

    int n  = sizeof(arr)/sizeof(arr[0]);

    cout<<srch(arr,12,0,4);








    return 0;
}