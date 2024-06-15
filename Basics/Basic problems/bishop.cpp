#include <bits/stdc++.h>
using namespace std;

int totalMoves(int a,int b){
    int cnt = 0;

    cnt+= min(a-1,b-1);
    cnt+= min(a-1,8-b);
    cnt+= min(8-a,b-1);
    cnt+= min(8-a,8-b);

    return cnt;

    

}


int main(){

    
    cout<<totalMoves(3,4);




    return 0;
}