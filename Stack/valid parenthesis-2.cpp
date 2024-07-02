
// applicable for only () not for multiple brackets like [],{},()

class Solution {
public:
    bool isValid(string s) {

        int left = 0;

        for(int i = 0; i<s.size(); i++){

            if(s[i] == '('){
                left++;
            }else{

                if(left == 0) return 0;
                else left--;
            }


        }

        return left == 0;

        
        
    }
};