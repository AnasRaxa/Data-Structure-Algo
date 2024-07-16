class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int consumed = 0;

        while(numBottles>=numExchange){

            consumed += numExchange;
            numBottles-=numExchange;
            numBottles++;

        }

        return consumed + numBottles;
        
    }
};












class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int consumed = numBottles;
        int empty = numBottles;

        while(empty>=numExchange){

            int extra = empty/numExchange;
            int remain = empty%numExchange;

            consumed+=extra;

            empty = extra+remain;


        }

return consumed;        
        
    }
};









