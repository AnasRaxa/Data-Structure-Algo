/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    
    
    
    
    
    
    
    bool detectLoop(Node* head)
    {
        // your code here
        
        unordered_map<Node*,bool>visited;
        
        Node* curr = head;
        
        while(curr){
            
            if(visited[curr] == 1){
                return 1;
            }
            
           visited[curr] = 1;
            curr = curr->next;
            
            
        }
        
        return 0 ;
    }
};/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    
    
    
    
    
    
    
    bool detectLoop(Node* head)
    {
        // your code here
        
        unordered_map<Node*,bool>visited;
        
        Node* curr = head;
        
        while(curr){
            
            if(visited[curr] == 1){
                return 1;
            }
            
           visited[curr] = 1;
            curr = curr->next;
            
            
        }
        
        return 0 ;
    }
};