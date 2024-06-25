#include <bits/stdc++.h>
using namespace std;




// int min(int* arr,int n,int minele){


//     if(n == -1) return minele;

//     if(arr[n]<minele) minele = arr[n];

//     min(arr,n-1,minele);

// }
int min2(int* arr,int n){


    if(n == 0) return arr[0];

    

    return  min(arr[n],min2(arr,n-1));

}



int main(){

    int arr[] = {0,9,3,4,5};

    int n  = sizeof(arr)/sizeof(arr[0]);

    cout<<min2(arr,n-1);







    return 0;
}