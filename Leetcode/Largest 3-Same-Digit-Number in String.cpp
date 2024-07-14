class Solution {
public:
    string largestGoodInteger(string num) {

        char large = ' ';

        for(int i = 2; i<num.length(); i++){

            if(num[i] == num[i-1] && num[i] == num[i-2]){
                if(num[i]>large) large = num[i];
            }

        }

        if(large == ' ') return "";

        return string(3,large);
        
    }
};