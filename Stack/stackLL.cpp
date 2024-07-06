#include <bits/stdc++.h>
using namespace std;


class Node{

    public:

    int data;
    Node* next;

    Node():data(),next(NULL){};

    Node(int n){
        data = n;
        next = NULL;
    }

};




class Stack{

public:

  Node* top;

  Stack(){
    top = NULL;
  }
  ~Stack(){

    Node* temp = top;

    while(top){

        temp = top;
        top = top->next;

        delete temp;

    }


  }


    bool isFull(){

        Node* temp = new Node;

        if(temp == NULL) return 1;
        delete temp;

        return 0;

    }

    bool isEmpty(){

        return top ? 0 : 1;

    }

  void push(int n){

    if(isFull()){
        cout<<"Stack overflow\n";
        return;
    }else{
        Node* temp = new Node(n);
        temp->next = top;
        top = temp;
    }
  }

  void pop(){

    if(isEmpty()){
        cout<<"stack underflow\n";
        return;
    }else{

        Node* temp = top;
        top = top->next;
        delete temp;

    }

  }


  int getTop(){

    

    if(isEmpty()){
        cout<<"stack is empty\n";
        return - 1;
    }else{

        return top->data;

    }

    
    
  }

  int peek(int index){

    if(isEmpty()){
        cout<<"stack is empty\n";
        return -1;
    }else{

        Node* temp = top;

        for(int i = 0; temp!=NULL && i<index-1; i++){
            temp = temp->next;
        }

        if(temp!=NULL){
            return temp->data;
        }else{
            return -1;
        }




    }




  }


  






};

















int main(){

    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk;
 
    // Populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
 
    cout << "Stack peek at 3rd: " << stk.peek(3) << endl;
    cout << "Stack peek at 10th: " << stk.peek(10) << endl;
    cout << "Stack top: " << stk.getTop() << endl;
    cout << "Stack full: " << stk.isFull() << endl;
    cout << "Stack empty: " << stk.isEmpty() << endl;
 
    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.pop();
    }
    cout << endl;
 
    // Underflow
    stk.pop();





    return 0;
}