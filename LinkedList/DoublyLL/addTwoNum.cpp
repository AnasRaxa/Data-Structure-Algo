class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    
    
    Node* rev(Node* curr,Node* prev){
        
        if(curr == NULL) return prev;
        
        
        Node* fut = curr->next;
        curr->next = prev;
        
        return rev(fut,curr);
        
        
        
    }
    
    
    Node* rev2(Node* head){
        
        Node* curr = head;
        Node* prev = NULL;
        Node* fut = NULL;
        
        while(curr){
            
            fut = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            
            curr = fut;
            
        }
        
        
        return prev;
        
        
    }
    
    
    
    
    
    
    
    
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        
        
        
        
        
        
        
        num1 = rev(num1,NULL);
        num2 = rev(num2,NULL);
        
        Node* curr1 = num1;
        Node* curr2 = num2;
        
        
        Node* head = new Node(0);
        Node* tail = head;
        
        int sum,carry = 0;
        
        while(curr1 && curr2){
            
            
            sum = curr1->data + curr2->data + carry;
            
            tail->next = new Node(sum%10);
            
            curr1 = curr1->next;
            curr2 = curr2->next;
            
            tail = tail->next;
            
            
            carry = sum/10;
            
            
        }
        
        
        while(curr1){
            
            sum = curr1->data + carry;
            
            tail->next = new Node(sum%10);
            
            curr1 = curr1->next;
            tail = tail->next;
            
            carry = sum/10;
            
        }
        while(curr2){
            
            sum = curr2->data + carry;
            
            tail->next = new Node(sum%10);
            
            curr2 = curr2->next;
            tail = tail->next;
            
            carry = sum/10;
            
        }
        
        while(carry){
            
            tail->next = new Node(carry%10);
            tail = tail->next;
            
            carry = carry/10;
            
        }
        
        
        head = rev(head->next,NULL);
        
        
        
        
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};