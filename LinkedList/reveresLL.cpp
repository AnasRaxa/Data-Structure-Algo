#include <bits/stdc++.h>
using namespace std;


class Node{

    public:
        int data;
        Node* next;

        
        Node(int n):data(n),next(NULL){};

};


// reverse using recuursion

Node* rev(Node* curr,Node* prev){

    if(curr == NULL) return prev;

    Node* fut = curr->next;
    curr->next = prev;

    return rev(fut,curr);


}



class LinkedList{

    public:

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
        void push(int n){

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



        



        void pop_back(){

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








    void display(){

            Node* temp = head;

            while(temp){

                cout<<temp->data<<endl;
                
                temp = temp->next;

            }


    }

    void reverse(){

        vector<int>ans;

        Node* temp = head;

        while(temp!=NULL){

            ans.push_back(temp->data);
            temp = temp->next;

        }

        int i = ans.size()-1;

        temp = head;

        while(temp!=NULL){
            temp->data = ans[i];
            i--;
            temp = temp->next;
        }

    }
    

    void reverse2(){

        
        Node* curr = head;
        Node* prev = NULL;
        Node* fut = NULL;

        while(curr){

            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;


        }

        head = prev;



    }
    void reverse3(){

        
        Node* r = NULL;
        Node* q = NULL;
        Node* p = head;

        while(p){

             r = q;
             q = p;
             p = p->next;

            q->next = r;


        }

        
        head = q;


    }








};



int main(){

    LinkedList l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);

    l1.reverse2();

    l1.display();





    return 0;
}