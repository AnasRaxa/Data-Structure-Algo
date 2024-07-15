class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();

        queue<int>q;

        for(int i = 0; i<n; i++){
            q.push(i);
        }

        int time = 0;

        while(!q.empty()){

            time++;

            int front = q.front();
            q.pop();

            tickets[front]--;

            if(front==k && tickets[front] == 0) return time;

            if(tickets[front]!=0) q.push(front);


        }

        return time;

    }
};








class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int time = 0;


        if(tickets[k] == 1) return k+1;

        while(1){

            
            for(int i = 0; i<n; i++){


                if(tickets[i]!=0){
                    tickets[i]--;
                    time++;
                }

                if(tickets[k]==0) return time;

            }



        }

        return time;
    }
};















class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int time = 0;

        for(int i = 0; i<n; i++){

            if(i<=k){
                
                time+=min(tickets[i],tickets[k]);

            }else{
                time+=min(tickets[i],tickets[k]-1);
            }

        }
        

        return time;
    }
};