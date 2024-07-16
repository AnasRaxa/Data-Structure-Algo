class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        map<int,int>mp;
        vector<int>result;

        for(auto i:arr1) mp[i]++;


        for(auto i:arr2){

            if(mp.count(i)){
                
                while(mp[i]--){
                    result.push_back(i);
                }

            }

        }

        for(auto i:mp){
            if(i.second>0){

                while(i.second--){
                    result.push_back(i.first);
                }

            }
            
        }


        return result;



        
    }
};












class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;

        for(int i = 0; i < arr2.size(); i++) {
            mp[arr2[i]] = i;
        }

        for(int &num : arr1) {
            if(!mp.count(num)) {
                mp[num] = 1e9;
            }
        }

        auto lambda = [&](int &num1, int &num2){
            if(mp[num1] == mp[num2]) { //1e9
                return num1 < num2;
            }

            return mp[num1] < mp[num2];
        };

        sort(begin(arr1), end(arr1), lambda);

        return arr1;
    }
};