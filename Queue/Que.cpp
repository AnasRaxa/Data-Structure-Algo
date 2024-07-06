#include <bits/stdc++.h>
using namespace std;



class Queue{

    public:

    int* arr;
    int size;
    int front;
    int rear;

    Queue(int n){

        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    
    }

    bool isEmpty(){
        return front == rear;
    }
    bool isFull(){
        return rear == size-1;
    }

    void enQueue(int n){

        if(isFull()){
            cout<<"Queue is full\n";
            return;
        }else{
            arr[++rear] = n;
        }

    }

    int deQueue(){

        if(isEmpty()){
            cout<<"Queue is empty\n";
            return -1;
        }else{
            return arr[++front];
        }
    }

    void display(){

        for(int i = front+1; i<=rear; i++){
            cout<<arr[i]<<" ";
        }

    }




};








int main(){

    Queue q1(5);

    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(3);
    q1.enQueue(4);
    q1.enQueue(5);
    q1.deQueue();
    q1.deQueue();

    

    q1.display();





    return 0;
}