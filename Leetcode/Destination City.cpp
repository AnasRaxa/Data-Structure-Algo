class Solution {
public:
    string destCity(vector<vector<string>>& paths) {


        unordered_map<string,int>mp;

        string res="";


        for(int i = 0; i<paths.size(); i++){
            mp[paths[i][0]]++;
        }

        for(int i = 0; i<paths.size(); i++){
            if(!mp.count(paths[i][1])) res = paths[i][1];
        }

        
        return res;
    }
};