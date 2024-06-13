// check prime number

#include <iostream>
using namespace std;


int main(){

    int n;
    

    cout<<"Enter a number to check Prime: ";cin>>n;

    if(n<2){
        cout<<n<<" is not Prime"<<endl;
        return 0;
    }
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            cout<<n<<" is not Prime"<<endl;
            return 0;
        }
    }


    cout<<n<<" is Prime"<<endl;





}