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
        
       unordered_map<Node*,Node*>m;
       
       while(temp){
           m[temp] = tailcopy;
           tailcopy = tailcopy->next;
           temp = temp->next;
       }
       
       tailcopy = headcopy;
       temp = head;
       
       while(temp){
           
           tailcopy->arb = m[temp->arb];
           
           tailcopy = tailcopy->next;
           temp = temp->next;
           
           
       }
       
       
       return headcopy;
       
        
        
    }

};