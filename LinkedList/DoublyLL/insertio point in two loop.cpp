/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    Node* temp = head1;
    
    while(temp->next){
        temp = temp->next;
    }
    
    temp->next = head1;
    
    
    Node* slow = head2;
    Node* fast = head2;
    
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        
        
        if(slow == fast) break;
        
    }
    if(fast == NULL || fast->next == NULL) return -1;
    
    slow = head2;
    
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    
    return fast->data;
    
    
    
    
    
    
}