#include <bits/stdc++.h>
using namespace std;


void fun(int n){

    if(n==0){
        cout<<"happy birthday"<<endl;
        return;
    }

    cout<<n<<" days left for bd"<<endl;

    fun(n-1);

}






int main(){

    int n = 5;

    fun(n);





    return 0;
}