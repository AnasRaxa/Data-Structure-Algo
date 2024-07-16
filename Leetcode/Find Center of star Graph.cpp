class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        unordered_map<int,int>mp;

        for(auto vec:edges){

            int u = vec[0];
            int v = vec[1];


            mp[u]++;
            mp[v]++;

        }

        for(auto v:mp){

            if(v.second == edges.size()){
                return v.first;
            }

        }

        return 1;
        
    }
};








class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        vector<int>first = edges[0];
        vector<int>second = edges[1];


        if(first[0] == second[0] || first[0] == second[1]) return first[0];


        return first[1];
        
    }
};


