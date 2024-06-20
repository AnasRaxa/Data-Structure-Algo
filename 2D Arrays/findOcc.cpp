#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[] = {4,3,2,1,2,7,6};
    int n = 7;

    for(int i = 0; i<n; i++){
        arr[i]--;  
    }

    for(int i = 0; i<n; i++){
        arr[arr[i]%n]+=n;
    }

    

    for(int i = 0; i<n; i++){
        cout<<i+1<<" : "<<arr[i]/n<<endl;
    }

    

    

    return 0;
}