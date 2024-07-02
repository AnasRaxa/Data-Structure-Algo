class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& arr) {
        // code here
        
        
        
        
        
        
        vector<int>ans(n,-1);
        stack<int> st;
        
        
        for(int i = 0; i<n*2; i++){
            
            
            while(!st.empty() && arr[st.top()] < arr[i%n]){
                
                ans[st.top()] = arr[i%n];
                st.pop();
                
                
            }
            
            st.push(i%n);
            
            
        }
        
        
        
        return ans; 
        
        
        
        
        
        
        
        
    }
};