// if there are n teams there will be 1 winner  and n-1 losers
// so there will be n-1 elementaions in whole tournaments 
// so in every match 1 team win and win losse
// so if there are n-1 elementaions this mean there will be n-1 matches to elementate n-1 teams
// in every match 1 team elementate 


// so easy solution is 

// return n-1
















class Solution {
public:
    int numberOfMatches(int n) {



        int total = 0;


        while(n>1){

            if(n%2==0){
                total+=n/2;
                n/=2;
            }else{
                total+=(n-1)/2;
                n = (n-1)/2 + 1;
            }


        }

        return total;
        
    }
};