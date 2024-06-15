#include <bits/stdc++.h>
using namespace std;

int countZeros(int n){
    int cnt = 0;
    while(n>=5){
        cnt += n/5;
        n=n/5;
    }
    return cnt;

}

int main(){

    
    cout<<countZeros(25);




    return 0;
}