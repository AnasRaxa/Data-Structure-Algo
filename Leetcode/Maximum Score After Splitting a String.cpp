class Solution {
public:
    int maxScore(string s) {

        
        int maxRes = 0;

        for(int i = 0; i<s.size()-1; i++){

            int zeroC = 0, oneC = 0;

            for(int j = 0; j<=i; j++){
                if(s[j] == '0') zeroC++;
            }

            for(int j = i+1; j<s.size(); j++){
                if(s[j] == '1') oneC++;
            }

            maxRes = max(maxRes, (zeroC+oneC));

        }


        return maxRes;


        
    }
};










class Solution {
public:
    int maxScore(string s) {

        
        int totalOne = 0;
        int maxRes = 0;

        for(auto x:s){
            if(x=='1') totalOne++;
        }

        int leftOne = 0,leftZero = 0;

        for(int i = 0; i<s.size()-1; i++){

            if(s[i] == '0') leftZero++;
            if(s[i] == '1') leftOne++;

            maxRes = max(maxRes, leftZero + (totalOne - leftOne));
            

        }

        return maxRes;


        
    }
};












class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int result = INT_MIN;

        
        int zeros = 0;
        int ones  = 0;
        
        for(int i = 0; i < n-1; i++) {
            if(s[i] == '1') {
                ones++;
            } else {
                zeros++;
            }
            
            result = max(result, zeros - ones);
        }
        
        if(s[n-1] == '1') {
            ones++;
        }
        
        return result+ones;
    }
};