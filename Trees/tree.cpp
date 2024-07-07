#include <bits/stdc++.h>
using namespace std;



class Node{

    public:
        Node* leftChild;
        int data;
        Node* rightChild;

        Node(){
            leftChild = nullptr;
            rightChild = nullptr;
        }
        Node(int n){
            data = n;
            leftChild = nullptr;
            rightChild = nullptr;
        }

};




class tree{

    public:

        Node* root;


        tree(){
            root = nullptr;
        }

        void create(){

            queue<Node*>q;

            Node* p;
            Node* t;
            int x;


            cout<<"Enter data of root: ";cin>>x;
            root = new Node();
            root->data = x;
            q.emplace(root);


            while(!q.empty()){

                
                p = q.front();
                q.pop();

                cout<<"Enter data of left child of "<<p->data<<": ";cin>>x;
                
                if(x!=-1){
                    t = new Node(x);
                    p->leftChild = t;
                    q.emplace(t);
                }
                cout<<"Enter data of right child of "<<p->data<<": ";cin>>x;
                
                if(x!=-1){
                    t = new Node(x);
                    p->rightChild = t;
                    q.emplace(t);
                }

            }



        }



        void preorder(Node* p){

            if(p){
                cout<<p->data<<" ";
                preorder(p->leftChild);
                preorder(p->rightChild);
            }
            
        }
        void preorder(){
            preorder(root);
        }


        void inorder(Node* p){

            if(p){
                inorder(p->leftChild);
                cout<<p->data<<" ";
                inorder(p->rightChild);
            }
            
        }
        void inorder(){
            inorder(root);
        }


        void postorder(Node* p){

            if(p){
                postorder(p->leftChild);
                postorder(p->rightChild);
                cout<<p->data<<" ";
            }
            
        }
        void postorder(){
            postorder(root);
        }


        void levelOrder(Node* p){
            queue<Node*>q;

            Node* t;

            cout<<root->data<<" ";
            q.emplace(root);

            while(!q.empty()){
                
                p = q.front();
                q.pop();

                if(p->leftChild){
                    cout<<p->leftChild->data<<" ";
                    q.emplace(p->leftChild);
                }
                if(p->rightChild){
                    cout<<p->rightChild->data<<" ";
                    q.emplace(p->rightChild);
                }


            }




        }

        void levelOrder(){
            levelOrder(root);
        }


        int count(Node* p){

            int x,y;

            if(p){


                x = count(p->leftChild);
                y = count(p->rightChild);

                return x+y+1;

            }

            return 0;

        }

        int count(){
            return count(root);
        }

        int sum(Node* p){

            int x,y;

            if(p){
                x = sum(p->leftChild);
                y = sum(p->rightChild);
                return x+y+p->data;
            }

            return 0;
        }

        int sum(){
            return sum(root);
        }

        int height(Node* p){
            int l  = 0, r = 0;

            if(p){

                l = height(p->leftChild);
                r = height(p->rightChild);

                if(l>r) return l+1;
                else return r+1;

            }

            return 0;
        }

        int height(){
            return height(root);
        }


        void iterativePre(Node* p){
            stack<Node*>stk;

            while(p!=NULL || !stk.empty()){


                if(p!=NULL){
                    cout<<p->data<<" ";
                    stk.emplace(p);
                    p = p->leftChild;
                }else{

                    p = stk.top();
                    stk.pop();
                    p = p->rightChild;

                }
            }

            cout<<endl;

        }
        void iterativePre(){
            iterativePre(root);
        }
        void iterativeIn(Node* p){
            stack<Node*>stk;

            while(p!=NULL || !stk.empty()){


                if(p!=NULL){
                    
                    stk.emplace(p);
                    p = p->leftChild;
                }else{

                    p = stk.top();
                    stk.pop();
                    cout<<p->data<<" ";
                    p = p->rightChild;

                }
            }

            cout<<endl;

        }
        void iterativeIn(){
            iterativeIn(root);
        }















};













int main(){

    tree t1;
    t1.create();
    t1.levelOrder();cout<<endl;
    cout<<t1.height()-1;





    return 0;
}