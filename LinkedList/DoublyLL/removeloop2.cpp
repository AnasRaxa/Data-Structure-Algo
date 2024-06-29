struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node* slow = head;
        Node* fast = head;
        
        
        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) break;
            
        }
        
        if(fast == NULL || fast->next == NULL) return;
        
        
        int count = 1;
        slow = fast->next;
        
        while(slow!=fast){
            
            count++;
            slow = slow->next;
            
        }
        
        
        
        
        fast = head;
        slow = head;
        
        while(count--){
            
            fast = fast->next;
            
        }
        
        
        while(fast!=slow){
            slow = slow->next;
            fast = fast->next;
        }
        
        
        while(slow->next != fast){
            slow = slow->next;
        }
        
        slow->next = NULL;
        
        
        
        
        
    }
};