struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = nullptr;
    }
    
};


/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int k){
      //Your code here
      
      int count = 1;
      Node* curr = head;
      Node* prev = nullptr;
      
      if(k==1) return nullptr;
      
      while(curr){
          
          if(k==count){
              
              prev->next = curr->next;
              delete curr;
              
              curr = prev->next;
              
              count = 1;
             
          }else{
              
              prev = curr;
              curr = curr->next;
              count++;
              
              
          }
          
          
       }
       
       return head;
      
      
      
      
      
    }
};