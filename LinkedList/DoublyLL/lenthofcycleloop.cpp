/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    
    Node* slow = head;
    Node* fast = head;
    
    
    while(fast!=NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast) break;
        
    }
    
    if(fast == NULL || fast->next == NULL) return 0;
    
    int count = 1;
    
    slow = fast->next;
    
    while(slow!=fast){
        
        count++;
        slow = slow->next;
    
    }
    
    return count;
    
    
}