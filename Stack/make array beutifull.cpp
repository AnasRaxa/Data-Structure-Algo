class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        
        stack<int>st;
        
        for(int i = 0; i<arr.size(); i++){
            
            if(st.empty()){
                st.push(arr[i]);
            }else{
                
                
                
                if(arr[i]>=0){
                    
                    if(st.top()>=0){
                        st.push(arr[i]);
                    }else{
                        st.pop();
                    }
                    
                }
                else if(arr[i]<0){
                    
                    if(st.top()<0){
                        st.push(arr[i]);
                    }else{
                        st.pop();
                    }
                    
                    
                }
                
            
            }
            
        }
        
        vector<int>ans(st.size());
        int i = st.size()-1;
        
        while(!st.empty()){
            
            ans[i] = st.top();
            st.pop();
            i--;
            
        }
        
        return ans;
        
        
    }
};