#include <bits/stdc++.h>
using namespace std;



struct Node{

    Node* prev;
    int data;
    Node* next;

    Node(int n):prev(NULL),data(n),next(NULL){};


};



class doubleLinkedList{


    public:

        Node* head = NULL;


        void push_front(int n){

            if(head == NULL){

                head = new Node(n);

            }else{

                Node* temp = new Node(n);
                temp->next = head;
                head->prev = temp;
                head = temp;

            }
        }
        void push_back(int n){

            if(head == NULL){

                head = new Node(n);

            }else{

                Node* tail = head;
                
                while(tail->next != NULL){
                    tail = tail->next;
                }

                Node* temp = new Node(n);

                tail->next = temp;
                temp->prev = tail;


            }
        }

        void insert(int n, int pos){

            if(pos == 1){

                Node* temp = head->next;

                Node* var = new Node(n);

                head->next = var;
                var->prev = head;

                var->next = temp;
                temp->prev = var;

            }
            else if(pos == 0){


                if(head == NULL){
                    head = new Node(n);
                }else{
                    Node* temp = new Node(n);
                    
                    temp->next = head;
                    head->prev = temp;

                    head = temp;

                }

                



            }else{

            
                Node* temp = head;

                pos--;

                while(pos--){
                    temp = temp->next;
                }

                if(temp->next == NULL){ // for last node
                    
                    Node* var = new Node(n);

                    var->prev = temp;
                    temp->next = var;


                }else{

                

                    Node* var = new Node(n);

                    var->next = temp->next;
                    var->prev = temp;

                    temp->next = var;

                    var->next->prev = var;


                }

            }



        }

        void pop_front(){

            if(head!=NULL){

                if(head->next == NULL){ // if only one head exists
                    delete head;
                    head = NULL;
                }
                else{
                    Node* temp = head;

                    head = head->next;
                    head->prev = NULL;
                    

                    delete temp;
                }

            }else{
                cout<<"Empty List\n";
            }
            
        }
        void pop_back(){

            if(head!=NULL){

                if(head->next == NULL){ // if only one node exits
                    delete head;
                    head = NULL;
                }else{

                    Node* temp = head;

                    while(temp->next != NULL){
                        temp = temp->next;
                    }

                    temp->prev->next = NULL;

                    delete temp;



                }




            }else{
                cout<<"Empty List\n";
            }


        }

        void dlt(int pos){


            if(pos == 1){

                pop_front();

            }else{



                pos--;

                Node* temp = head;

                while(pos--){
                    
                    temp = temp->next;

                }

                if(temp->next == NULL){


                    temp->prev = NULL;
                    delete temp;

                }

                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;

                delete temp;


            }


        }




        void dispaly(){

            Node* temp = head;

            while(temp){

                cout<<temp->data<<endl;
                temp = temp->next;

            }


        }

        










};





int main(){

    
    doubleLinkedList l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    l1.insert(5,3);

    l1.dispaly();




    return 0;
}