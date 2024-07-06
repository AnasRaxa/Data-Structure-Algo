#include <bits/stdc++.h>
using namespace std;



Node* search(Node* p, int key){


    if(p==NULL) return NULL;

    if(p->data == key) return p;
    
    return search(p->next,key);
    



}











int main(){

    





    return 0;
}