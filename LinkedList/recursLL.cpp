#include <bits/stdc++.h>
using namespace std;



class Node{

    public:
        int data;
        Node* next;

        
        Node(int n):data(n),next(NULL){};

};


Node* createLink(int arr[],int i,int n){

    if(i==n) return NULL;


    Node* temp = new Node(arr[i]);

    temp->next = createLink(arr,i+1,n);

    return temp;


}
Node* createLink2(int arr[],int i,int n,Node* prev){

    if(i==n) return prev;


    Node* temp = new Node(arr[i]);

    temp->next = prev;

    return createLink2(arr,i+1,n,temp);

    


}

Node* dlt(Node* curr,int x){

    if(x==1){

        Node* temp = curr->next;
        delete curr;
        return temp;

    }

    curr->next = dlt(curr->next,x-1);
    return curr;


}



int main(){

    Node* head = NULL;

    int arr[3] = {1,2,3};

    // head = createLink(arr,0,3);

    head = createLink2(arr,0,3,head);

    head = dlt(head,2);

    Node* temp = head;

    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }










    return 0;
}