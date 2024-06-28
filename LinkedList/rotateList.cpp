

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:


    ListNode* rotateRight(ListNode* head, int k) {


        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;



        int count = 0;

        ListNode* temp = head;

        while(temp){
            count++;
            temp = temp->next;
        }

        k = k%count;

        if(k==0) return head;
        

        count = count - k;

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(count--){
            
            prev = curr;
            curr = curr->next;

        }

        prev->next = nullptr;

        ListNode* temp2 = curr;

        while(temp2->next != nullptr){
            temp2 = temp2->next;
        }

        temp2->next = head;

        head = curr;



        return head;

        
        
    }
};