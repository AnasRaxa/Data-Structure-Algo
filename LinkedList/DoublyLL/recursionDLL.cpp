#include <bits/stdc++.h>
using namespace std;

struct Node{

    Node* prev;
    int data;
    Node* next;

    Node(int n):prev(NULL),data(n),next(NULL){};


};







Node* createDLL(int arr[],int i,int n,Node* back){

    if(i==n) return NULL;


    Node* temp = new Node(arr[i]);
    temp->prev = back;

    temp->next = createDLL(arr,i+1,n,temp);

    return temp;
    

}


int main(){

    





    return 0;
}