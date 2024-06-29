class Solution
{
    public:
    
    
    Node* find(Node* curr1,Node* curr2,Node* x){
        
        while(curr1 != x){
            
            curr1 = curr1->next;
            curr2 = curr2->next;
            
        }
        
        return curr2;
        
    }
    
    
    
    Node *copyList(Node *head)
    {
        //Write your code here
        
        
        Node* headcopy = new Node(0);
        Node* tailcopy = headcopy;
        
        Node* temp = head;
        
        while(temp){
            
            tailcopy->next = new Node(temp->data);
            tailcopy = tailcopy->next;
            temp = temp->next;
            
        }
        
        tailcopy = headcopy;
        headcopy = headcopy->next;
        delete tailcopy;
        
        
        tailcopy = headcopy;
        temp = head;
        
       
       
       Node* curr1 = head, *curr2 = headcopy;
       
       Node* front1, *front2;
       
       
       while(curr1){
           
           front1 = curr1->next;
           front2 = curr2->next;
           
           curr1->next = curr2;
           curr2->next = front1;
           
           curr1 = front1;
           curr2 = front2;
           
           
           
       }
       
       curr1 = head;
       
       while(curr1){
           
           curr2 = curr1->next;
           if(curr1->arb)
           curr2->arb = curr1->arb->next;
           curr1 = curr2->next;
           
           
       }
       
       
       curr1 = head;
       
       while(curr1->next){
           
           front1 = curr1->next;
           curr1->next = front1->next;
           curr1 = front1;

       }
       
       return headcopy;
       
        
        
    }

};
