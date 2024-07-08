#include <bits/stdc++.h>
using namespace std;


void  insert(Node* t, int k){

    Node* prev = NULL;

    while(t!=NULL){

        prev = t;

        if(k == t->data) return;
        else if(k<t->data){
            
            t = t->lchild; 
        }
        else{ 
            
            t = t->rchild; 
        }
    }

    Node* temp = new Node(k);

    if(k<prev->data) prev->lchild = temp;
    else prev->rchild = temp;

}




Node* rInsert(Node* p, int k){

    Node* temp;

    if(p==NULL){
        temp = new Node(k);
        return temp;
    }
    
    if(k<p->data){
        p->lchild = rInsert(p->lchild);
    }else{
        p->rchild = rInsert(p->rchild);
    }

    return p;
}






int main(){

    





    return 0;
}