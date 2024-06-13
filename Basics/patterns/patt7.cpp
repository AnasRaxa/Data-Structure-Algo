/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1 

*/


#include <iostream>
using namespace std;



int main(){

    int n;
    cout<<"Enter no to print pattern: ";cin>>n;


    

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }





    return 0;
}