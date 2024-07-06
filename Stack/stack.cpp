#include <bits/stdc++.h>
using namespace std;




class Stack{


    int *arr;
    int top;
    int size;

    public:
    

        Stack(int s):top(-1),size(s),arr(new int(s)){};

        void push(int val){

            if(top == size-1){
                
                cout<<"Stack Overflow\n";
                return;

            }else{

                arr[++top] = val;
                cout<<val<<" Pushed into the stack\n";
                

            }


        }

        void pop(){

            if(top == -1){
                cout<<"Stack underflow\n";
                return;
            }
            else{
                top--;
                cout<<"Deleted "<<arr[top+1]<< " from the stack\n";
            }


        }


        int peek(){

            if(top == -1){
                cout<<"Empty stack\n";
                return -1;
            }else{
                return arr[top];
            }


        }

        bool isEmpty(){

            return top == -1;

        }

        int isSize(){

            return top+1;

        }






};


int main(){

    

    Stack s1(3);

    s1.push(1);
    s1.push(2);
    
    s1.pop();
    s1.pop();

    if(s1.isSize() > 0){
        cout<<s1.peek()<<endl;
    }

    
    cout<<s1.isEmpty()<<endl;
    cout<<s1.isSize()<<endl;

    



    return 0;
}