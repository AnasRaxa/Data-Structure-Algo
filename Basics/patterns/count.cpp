// print counting

#include <iostream>
using namespace std;



int main(){

    int n;
    cout<<"Enter number to print pattern: ";cin>>n;

    for(int i = 1; i<=n; i++){

        for(int j = 1; j<=n; j++){
            
            cout<<n*(i-1)+j<<" ";

        }

        cout<<endl;
        

    }





    return 0;
}