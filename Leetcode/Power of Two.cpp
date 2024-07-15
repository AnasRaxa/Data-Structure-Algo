class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<1) return false;
        while(n!=1){
            if(n%2==1){
                return false;
            }
            else{
                n=n/2;
            }
        }
        return true;

    }
};



class Solution {
public:
    bool isPowerOfTwo(int n) {
       
       if(n<1) return false;

       return (n&(n-1)) == 0;

    }
};






class Solution {
public:
    bool isPowerOfTwo(int n) {
       
       if(n<1) return false;
       if(n==1) return true;

       return n%2==0 && isPowerOfTwo(n/2);

    }
};








class Solution {
public:
    bool isPowerOfTwo(int n) {
       
       if(n<1) return false;
       
       int count = __builtin_popcount(n);

       if(count == 1) return true;

       return false;


    }
};