class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        
        vector<long long>ans(n,-1);
        stack<int> st;
        
        
        for(int i = n-1; i>=0; i--){
            
            
            while(!st.empty() && arr[st.top()] < arr[i]){
                
                st.pop();
                
                
            }
            if(!st.empty()){
                ans[i] = arr[st.top()];
            }
            
            st.push(i);
            
            
        }
        
        
        
        return ans;
        
    }
};
