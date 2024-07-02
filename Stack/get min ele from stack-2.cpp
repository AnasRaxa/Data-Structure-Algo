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
    
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           
           
           if(s.empty()) return -1;
           else{
               
               return s.top()%101;
               
           }
           
           
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()) return -1;
           else{
               
               int element = s.top()/101;
               s.pop();
               return element;
               
           }
           
           
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           
           if(s.empty()){
               s.push(x*101+x);
           }else{
               
               s.push(x*101+min(x,s.top()%101));
               
           }
           
           
       }
};