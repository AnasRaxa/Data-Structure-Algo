The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int> s2;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           
           
           if(s.empty()) return -1;
           else{
               
               return s2.top();
               
           }
           
           
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()) return -1;
           else{
               
               int element = s.top();
               s.pop();
               s2.pop();
               
               return element;
               
           }
           
           
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           
           if(s.empty()){
               s.push(x);
               s2.push(x);
           }else{
               
               s.push(x);
               s2.push(min(x,s2.top()));
               
           }
           
           
       }
};