#include <bits/stdc++.h>
using namespace std;





void remove(Node* p){


    Node* prev = p;
    Node* curr = p->next;


    while(curr!=NULL){

        if(prev->data != curr->data){
            prev = curr;
            curr = curr->next;
        }else{

            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }

    }



}



int main(){

    





    return 0;
}