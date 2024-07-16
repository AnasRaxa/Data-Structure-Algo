class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {

        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int n = seats.size();

        int move = 0;

        for(int i = 0; i<n; i++){

            if(seats[i]>students[i]){
                move+=seats[i]-students[i];
            }else{
                move+=students[i]-seats[i];
            }

        }

        return move;
        
    }
};