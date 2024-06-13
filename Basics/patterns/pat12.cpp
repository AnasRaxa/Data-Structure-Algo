/*

        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/


#include <iostream>
using namespace std;



int main(){

    int n;
    cout<<"Enter no to print pattern: ";cin>>n;

    
    

    for(int i = 1; i<=n; i++){

        
        // for(int j = 1; j<=n-i+1; j++){
        //     cout<<"  ";
        // }

        // for(int j = 0; j<i-1; j++){
        //     cout<<"* ";
            
        // }

        // for(int j = 1; j<=i; j++){
        //     cout<<"* ";
            
        // }
        


        // 2nd approach 


        for(int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j = 1; j<=(i*2)-1; j++){
            cout<<"* ";
        }



        cout<<endl;


    }





    return 0;
}