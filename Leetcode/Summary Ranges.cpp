class Solution 
{
    public:
    vector<string> summaryRanges(vector<int>& arr) 
    {
        int n=arr.size();
        vector<string> ans;

        //corner case-1
        if(n==1)
        {
            ans.push_back(to_string(arr[0]));
            return ans;
        }

        int i=0;
        int j=0;
        while(j<n-1)
        {
            if(arr[j] == arr[j+1]-1)
            {
                j++;
            }
            else
            {
                if(i==j)
                    ans.push_back(to_string(arr[i])); 
                else
                    ans.push_back(to_string(arr[i]) + "->" + to_string(arr[j]));
                j++;
                i=j;
            }
        }

        //corner case-2
        if(j==n-1 && i!=j)
            ans.push_back(to_string(arr[i]) + "->" + to_string(arr[j]));
        else if(j==n-1 && i==j)
            ans.push_back(to_string(arr[j]));
        return ans;
    }
};
