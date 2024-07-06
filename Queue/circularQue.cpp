#include <bits/stdc++.h>
using namespace std;



class CirQueue{

    public:

    int* arr;
    int size;
    int front;
    int rear;

    CirQueue(int n){

        size = n;
        arr = new int[n];
        front = 0;
        rear = 0;
    
    }

    bool isEmpty(){
        return front == rear;
    }
    bool isFull(){
        return (rear+1)%size == front;
    }

    void enQueue(int n){

        if(isFull()){
            cout<<"Queue is full\n";
            return;
        }else{
            
            rear = (rear + 1)%size;

            arr[rear] = n;
        }

    }

    int deQueue(){

        if(isEmpty()){
            cout<<"Queue is empty\n";
            return -1;
        }else{
            front = (front+1)%size;
            return arr[front];
        }
    }

    void display(){

        int i = front + 1;

        do{

            cout<<arr[i]<<" ";
            i = (i+1)%size;

        }while( i != (rear+1)%size);

        cout<<endl;

    }




};








int main(){

    CirQueue q1(5);

    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(3);
    q1.enQueue(4);
    
    q1.deQueue();
    q1.deQueue();

    q1.enQueue(5);
    q1.enQueue(6);


    

    q1.display();





    return 0;
}