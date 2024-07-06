#include <bits/stdc++.h>
using namespace std;


int Max(Node* p){

    int c = 0;

    if(p==NULL) return INT_MIN;
    else{

        c = Max(p->next);

        if(c>p->data) return c;
        else return p->data;

    }




}




int main(){

    





    return 0;
}