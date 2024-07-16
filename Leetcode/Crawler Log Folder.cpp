class Solution {
public:
    int minOperations(vector<string>& logs) {

        int operation = 0;

        for(auto x:logs){
            if(x=="../"){

                if(operation>0)operation--;

            } 
            else if(x=="./")continue;
            else{
                operation++;
            }
        }
        
        return operation;
        
    }
};








class Solution {
public:
    int minOperations(vector<string>& logs) {

        stack<string>st;

        for(auto x:logs){

            if(x=="../"){
                if(!st.empty()){
                    st.pop();
                }
            }else if(x=="./") continue;
            else{
                st.push(x);
            }

        }

        return st.size();
        
    }
};

