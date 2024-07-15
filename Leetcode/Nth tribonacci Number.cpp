class Solution {
public:

    int dp[38];

    int solve(int n){
        
        if(n==0) return 0;
        if(n==1 || n==2) return 1;

        if(dp[n] != -1){
            return dp[n];
        } 


        int a = solve(n-1);
        int b = solve(n-2);
        int c = solve(n-3);


        return dp[n] = a+b+c;


    }



    int tribonacci(int n) {
        
        memset(dp,-1,sizeof(dp));
        return solve(n);
        
    }
};















class Solution {
public:

    

    int tribonacci(int n) {

        int t[38];

        t[0] = 0;
        t[1] = 1;
        t[2] = 1;

        for(int i = 3; i<38; i++){
            
            t[i] = t[i-1]+t[i-2]+t[i-3];

        }

        return t[n];
        
        
    }
};












class Solution {
public:

    

    int tribonacci(int n) {

        if(n==0) return 0;
        if(n==1 || n==2) return 1;

        int d = 0;
        int c = 1;
        int b = 1;

        int a;

        for(int i = 3; i<=n; i++){

            a = b+c+d;

            d=c;
            c=b;
            b=a;
        }

        return a;
        
        
    }
};