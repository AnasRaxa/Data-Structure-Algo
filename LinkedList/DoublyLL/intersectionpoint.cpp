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
    
    int count1 = 0, count2 = 0;
    
    Node* temp1 = head1 , *temp2 = head2;
    
    while(temp1){
        count1++;
        temp1 = temp1->next;
    }
    while(temp2){
        count2++;
        temp2 = temp2->next;
    }
    
    temp1= head1, temp2 = head2;
    
    while(count1>count2){
        
        temp1 = temp1->next;
        count1--;
    }
    while(count2>count1){
        
        temp2 = temp2->next;
        count2--;
    }
    
    
    
    
    
    while(temp1 != temp2){
        
        temp1 = temp1->next;
        temp2 = temp2->next;
        
    }
    
    if(!temp1) return -1;
    
    
    return temp1->data;
    
    
    
}