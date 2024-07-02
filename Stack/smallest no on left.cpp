class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        // code here
        
        vector<int>ans(n,-1);
        stack<int> st;
        
        
        for(int i = n-1; i>=0; i--){
            
            
            
            while(!st.empty() && arr[st.top()] > arr[i]){
                
                ans[st.top()] = arr[i];
                st.pop();
                
                
            }
            
            st.push(i);
            
            
            
            
        }
        
        
        
        return ans;
        
        
        
        
    }
};