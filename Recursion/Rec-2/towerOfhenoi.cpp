#include <bits/stdc++.h>
using namespace std;

void toh(int n,int source,int helper, int dest){


    if(n==1){
            cout<<"Disk "<<n<<" move from source "<<source<<" to destination "<<dest<<endl;
            return;
    }
    
    toh(n-1,source,dest,helper);

    cout<<"Disk "<<n<<" move from source "<<source<<" to destination "<<dest<<endl;

    toh(n-1,helper,source,dest);




}

int main(){

    toh(3,1,2,3);

    // steps will pow(2,n)-1





    return 0;
}