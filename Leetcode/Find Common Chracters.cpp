class Solution {
public:

void fillCount(int count[26],string& s){

    for(auto ch:s){
        count[ch-'a']++;
    }

}
    vector<string> commonChars(vector<string>& words) {


        int n = words.size();
        vector<string>result;

        int count[26] = {0};

        fillCount(count,words[0]);

        for(int i = 1; i<n;i++){
            
            int temp[26] = {0};

            fillCount(temp,words[i]);

            for(int j = 0; j<26; j++){
                
                count[j] = min(count[j],temp[j]);

            }

        }

        for(int j = 0; j<26; j++){
                
                while(count[j]--){

                    result.push_back(string(1,'a'+j));

                }

        }

        return result;

        
    }
};