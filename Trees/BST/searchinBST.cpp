#include <bits/stdc++.h>
using namespace std;


Node* rSearch(Node* p, int k){

    if(p == NULL) return NULL;
    else if(k == p->data) return p;
    else if(k<p->data){
       return rSearch(p->lchild,k);
    }else{
        return rSearch(p->rchild,k);
    }
}


Node* itrativeSearch(Node* p, int k){


    while(p!=NULL){

        if(k == p->data) return p;
        else if(k<p->data) p = p->lchild;
        else p = p->rchild;
    }

    return NULL;

}










int main(){

    





    return 0;
}