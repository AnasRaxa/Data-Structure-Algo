#include <bits/stdc++.h>
using namespace std;

void printDiv1(int n){

    for(int i = 1; i<=n; i++){
        if(n%i==0) cout<<i<<" ";
    }


}

void printDiv2(int n){

    vector<int> ls;

    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if(i!=n/i){
                ls.push_back(n/i);
            }
        }
    }

    sort(ls.begin(),ls.end());
    for(auto &i:ls) cout<<i<<" ";

}

int main(){

    
    printDiv2(36);




    return 0;
}