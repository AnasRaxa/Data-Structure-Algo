class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int stu_0 = 0;
        int stu_1 = 0;


        for(int x:students){
            if(x==1) stu_1++;
            else stu_0++;
        }
        
        for(int i = 0; i<sandwiches.size(); i++){

            if(sandwiches[i] == 0){
                if(stu_0>0){
                    stu_0--;
                    
                }else{
                   return sandwiches.size()-i;
                }
            }else{

                if(stu_1>0){
                    stu_1--;
                    
                }else{
                    return sandwiches.size()-i;
                }

            }

        }
        
        return 0;
        
    }
};