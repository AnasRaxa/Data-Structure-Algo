#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

        Node(int n):data(n),next(NULL){};

};



class Stack{

    public:
        Node* top;
        int size;

        Stack():top(NULL),size(0){};

        void push(int n){
            
            Node* temp = new Node(n);
            if(temp == NULL){ // heap full
                cout<<"stck overflow\n";
                return;
            }

            temp->next = top;
            top = temp;
            size++;
            cout<<top->data<<" pushed into stack\n";

        }
        void pop(){
            
            if(top == NULL){
                cout<<"Empty Stack\n";
                return;
            }else{

                Node* temp = top;
                top = top->next;
                cout<<temp->data<<" poped from stack\n";
                delete temp;
                size--;

            }

        }

        int peek(){


            if(top == NULL){
                
                cout<<"Empty Stack\n";
                return -1;

            }else{

                return top->data;
                
            }

        }

        bool isEmpty(){
            return top == NULL;
        }

        int isSize(){

            return size;

        }




};
    







int main(){

    

    Stack s1;

    s1.push(1);
    s1.push(2);
    
    s1.pop();
    s1.pop();



    cout<<s1.peek()<<endl;

    cout<<s1.isEmpty()<<endl;
    cout<<s1.isSize()<<endl;

    return 0;
}