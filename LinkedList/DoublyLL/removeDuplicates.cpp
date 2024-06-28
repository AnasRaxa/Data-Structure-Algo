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

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 
    vector<int>ans;
    
    ans.push_back(head->data);
    
    Node* temp = head->next;
    
    while(temp){
        
        if(ans[ans.size()-1] != temp->data){
            ans.push_back(temp->data);
        }
        
        temp = temp->next;
        
        
    }
    
    
    int index = 0;
    
    temp = head;
    
    while(index<ans.size()){
        
        temp->data = ans[index];
        
        index++;
        temp = temp->next;
        
        
        
    }
    
    int size = ans.size()-1;
    temp = head;
    
    while(size--){
        temp = temp->next;
    }
    
    temp->next = nullptr;
    
    
    return head;
    
 
 
 
}
































int main(){

    





    return 0;
}