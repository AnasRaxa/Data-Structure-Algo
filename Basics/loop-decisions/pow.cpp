// caluclate power of number

#include <iostream>
using namespace std;

int main(){

    int n,pow;
    cout<<"Enter Number: ";cin>>n;
    cout<<"Enter Power: ";cin>>pow;
    int ans = n;

    for(int i = 1; i<pow; i++){
        ans = ans*n;
    }

    cout<<"Power of "<<n<<" is "<<ans<<endl;



}



