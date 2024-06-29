Node* merge(Node* head1, Node* head2){
    
    
    Node* head = new Node(-1);
    Node* tail = head;
    
    while(head1 && head2){
        
        if(head1->data <= head2->data){
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
            
        }
        else{
            
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
            
        }
        
        
    }
    
    
    if(head1){
        tail->next = head1;
    }
    if(head2){
        tail->next = head2;
    }
    
    return head->next;
    
    
    
    
}




class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           
           Node* head = arr[0];
           
           for(int i = 1; i<k; i++){
               
               head = merge(head,arr[i]);
               
               
           }
           
           
           return head;
    }
};