class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> arr1(26);
        for(int i=0; i<chars.length(); i++){
            char ch = chars[i];
            arr1[ch-97]++;
        }
        int ans = 0;

        for(int i=0; i<words.size(); i++){
            string s = words[i];
            vector<int> arr2(26);
            for(int j=0; j<s.length(); j++){
                arr2[s[j]-97]++;
            }

            bool flag = true;
            for(int j=0; j<26; j++){
                if(arr1[j]<arr2[j]){
                    flag = false;
                    break;
                }
            }
            if(flag==true) ans = ans + s.length();
        }
        return ans;
    }
};