/*

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/


#include <iostream>
using namespace std;



int main(){

    int n;
    cout<<"Enter no to print pattern: ";cin>>n;





    for(int i = 1; i<=n; i++){

        
        


        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }

        char c = 'A';
        int breakpoint = (i*2-1)/2;
        for(int j = 1; j<=i*2-1; j++){
            cout<<c;
            if(j<=breakpoint) c++;
            else c--;
        }

        

    
        cout<<endl;

    }
    

    



    return 0;
}