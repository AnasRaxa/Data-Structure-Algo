class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n = s.size();

        string result = string(n,'0');

        int oneC = 0;

        for(auto c:s){
            if(c=='1') oneC++;
        }

        result[n-1] = '1';

        oneC--;


        int j = 0;

        while(oneC--){

            result[j] = '1';
            j++;

        }

        return result;

    }
};