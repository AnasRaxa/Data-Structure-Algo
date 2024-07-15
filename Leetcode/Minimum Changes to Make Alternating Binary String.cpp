class Solution {
public:
    int minOperations(string s) {

        int start_with_0 = 0;
        int start_with_1 = 0;


        for(int i = 0; i<s.size(); i++){

            if(i%2==0){

                if(s[i] == '1'){
                    start_with_0++;
                }else{
                    start_with_1++;
                }

            }else{
                if(s[i] == '1'){
                    start_with_1++;
                }else{
                    start_with_0++;
                }
            }

        }
        
        return min(start_with_0,start_with_1);
    }
};






class Solution {
public:
    int minOperations(string s) {

        int start_with_0 = 0;
        


        for(int i = 0; i<s.size(); i++){

            if(i%2==0){

                if(s[i] == '1'){
                    start_with_0++;
                }

            }else{
                if(s[i] == '0'){
                    start_with_0++;
                }
            }

        }

        int start_with_1 = s.size() - start_with_0;
        
        return min(start_with_0,start_with_1);
    }
};






class Solution {
public:
    int minOperations(string s) {

       int n = s.size();
       int operations = 0;

       for(int i=1; i<n; i++)
       {
          if(s[i]==s[i-1])
          {   

            operations++;

            if(s[i-1]=='0')
                 s[i] = '1' ; 
            
            else
                s[i] = '0' ;

          }
       }

       return min(operations , n-operations);
    }
};






