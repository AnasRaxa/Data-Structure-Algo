#include <bits/stdc++.h>
using namespace std;


class Node{

    public:
        int data;
        Node* next;

        
        Node(int n):data(n),next(NULL){};

};


class LinkedList{

    public:

        ~LinkedList(){

            Node* temp = NULL;

            while(head){

                temp = head;

                head = head->next;

                delete temp;

            }

        }

        Node* head = NULL;

        void add(int n){

            if(head == NULL){
                
                head = new Node(n);
                
            }else{

                Node* temp;
                temp = new Node(n);
                temp->next = head;
                head = temp;

            }


        }
        void addToend(int n){

            if(head==NULL){
                head = new Node(n);
            }else{

                

                Node* temp = head;
                while(temp->next!=NULL){
                    temp = temp->next;
                }

                temp->next = new Node(n);

            }
            
        }


        // void addToend2(int n){

        //     static Node* tail = NULL;

        //     if(head==NULL){
        //         head = new Node(n);
        //         tail = head;
                
        //     }else{

                

        //         tail->next = new Node(n);
        //         tail = tail->next;

        //     }
            


        // }


        void insert(int n,int pos){


            Node* temp = head;

            pos--;

            while(pos--){
                temp = temp->next;
            }

            Node* temp2 = new Node(n);

            temp2->next = temp->next;
            temp->next = temp2;



        }


        void pop_front(){

            if(head != NULL){
                Node* temp = head;
                head = head->next;
                delete temp;
            }else{
                cout<<"Empty LinkedList\n";
            }

        }

        void pop_back(){

            if(head!=NULL){

                if(head->next == NULL){
                    Node* temp = head;
                    head = NULL;
                    delete temp;
                }else{


                    Node* temp = head;

                    while(temp->next->next!=NULL){
                        
                        temp = temp->next;

                    }

                    Node* temp2 = temp->next;
                    temp->next = NULL;
                    delete temp2;

                }


            }


        }
        void pop_back2(){

            if(head!=NULL){

                if(head->next == NULL){
                    Node* temp = head;
                    head = NULL;
                    delete temp;
                }else{


                    Node* temp = head;
                    Node* prev = NULL;


                    while(temp->next!=NULL){
                        prev = temp;
                        temp = temp->next;

                    }

                    delete temp;
                    prev->next = NULL;

                }


            }


        }
        void dlt(int n){

            

                if(n==1){
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                }else{


                    Node* temp = head;
                    Node* prev = NULL;

                    n--;

                    while(n--){

                        prev = temp;
                        temp=temp->next;

                    }

                    prev->next = temp->next;
                    delete temp;

                }


            


        }
        void dlt2(int n){


            if(n==1){
                    Node* temp = head;
                    head = head->next;
                    delete temp;
            }
            else if(n==2){

                Node* temp = head->next;
                head->next = temp->next;
                delete temp;
            }else{

                n-=2;

                Node* temp = head;

                while(n--){

                    temp = temp->next;

                }

                Node* temp2 = temp->next;

                temp->next = temp2->next;

                delete temp2;


            }
            


        }

        void deleteWithoutHead(Node* curr){

            Node* temp = curr->next;
            curr->data = temp->data;
            curr->next = temp->next;
            delete temp;


        }


        void display(){

            Node* temp = head;

            while(temp){

                cout<<temp->data<<endl;
                
                temp = temp->next;

            }


        }
    


};



int main(){

    

    LinkedList l1;
    
    l1.addToend(1);
    l1.addToend(2);
    l1.addToend(3);

 
    
    l1.dlt2(1);
    l1.display();



    return 0;
}