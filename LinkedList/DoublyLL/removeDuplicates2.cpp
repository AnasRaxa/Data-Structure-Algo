#include <bits/stdc++.h>
using namespace std;





struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};







Node *removeDuplicates(Node *head)
{
 // your code goes here

 if(!head || !head->next) return head;
 
 Node* prev = head;
 Node* curr = head->next;
 
    while(curr){
        
        if(curr->data == prev->data){
            
            prev->next = curr->next;
            
            delete curr;
            
            curr = prev->next;
            
            
        }else{
            curr = curr->next;
            prev = prev->next;
        }
        
    }
 
    
 return head;
 
 
}
































int main(){

    





    return 0;
}