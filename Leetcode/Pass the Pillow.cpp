class Solution {
public:
    int passThePillow(int n, int time) {

        int i = 1;
        int dir = 1;

        while(time>0){

            if(i+dir >= 1 && i+dir<=n){
                i+=dir;
                time--;
            }else{
                dir*=-1;
            }

        }

        return i;


        return i;
        
    }
};











class Solution {
public:
    int passThePillow(int n, int time) {

        int fullRound = time/(n-1);

        int timeLeft = time%(n-1);

        if(fullRound%2==0){
            return timeLeft+1;
        }else{
            return n-timeLeft;
        }
        
return -1;

    }
};