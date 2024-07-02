class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       
       
       vector<int>ans(n);
        stack<int> st;
        
        
        for(int i = n-1; i>=0; i--){
            
            
            while(!st.empty() && arr[st.top()] < arr[i]){
                
                ans[st.top()] = st.top()-i;
                st.pop();
                
                
            }
            
            st.push(i);
            
            
        }
        
        
        while(!st.empty()){
            
            ans[st.top()] = st.top() + 1;
            st.pop();
            
            
            
        }
        
        
        
        return ans;
       
       
       
       
       
       
    }
};