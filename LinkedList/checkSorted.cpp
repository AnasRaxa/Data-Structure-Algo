#include <bits/stdc++.h>
using namespace std;






bool chkSorted(Node* p){

int x  = INTMAX_MIN;

    while(first!=NULL){

        if(p->data<x) return false;
        else{
            x = p->data;
            p = p->next;
        }


    }

    return true;





}












int main(){

    





    return 0;
}