class Solution {
public:
    string reversePrefix(string word, char ch) {

        

        int j = word.find(ch);


        reverse(word.begin(),word.begin()+j+1);


        return word;
        
    }
};














class Solution {
public:
    string reversePrefix(string word, char ch) {

        int i = 0;
        int j = 0;
        for(j; j<word.size(); j++){

            if(word[j]==ch) break;

        }

        if(j==word.size()) return word;

        while(i<=j){

            swap(word[i],word[j]);
            i++;
            j--;

        }


        return word;
        
    }
};