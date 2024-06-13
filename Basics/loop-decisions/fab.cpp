// generate fabonaci series

#include <iostream>
using namespace std;


int main(){


    int n;
    cout<<"Enter no to caluclate fabonaci: ";cin>>n;


    int last = 0;
    int prev = 1;
    int current;

    cout<<last<<" "<<prev<<" ";

    for(int i = 3; i<=n; i++){

        current = last + prev;
        cout<<current<<" ";
        last = prev;
        prev = current;

        

    }







}