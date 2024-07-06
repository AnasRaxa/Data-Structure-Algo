#include <bits/stdc++.h>
using namespace std;

// upper traingle part of matrix is non zero
// m[i][j] != 0 if i<=j 
// m[i][j] == 0 if i>j
// non - zero elements = n(n+1)/2
// zero elements       = n^2 - n(n+1)/2 = n(n-1)/2


// formula for row major ele = ((i-1)n-((i-2)(i-1))/2)+j-i
// formula for col major ele = j*(j+1)/2 + i



class lowerTri{

    int n;
    int *A;


    public:

        lowerTri(int n){
            this->n = n;
            A = new int[n*(n+1)/2];
        }

        ~lowerTri(){
            delete[] A;
        }

        void set(int i, int j, int x){

            if(i>=j){
                A[i*(i+1)/2] = x;
            }

        }
        int get(int i, int j){
            if(i>=j) return A[i*(i+1)/2];
            else return 0;
        }

        void dispaly(){

            for(int i = 0; i<n; i++){
                for(int j =0 ; j<n; j++){
                    if(i>=j) cout<<A[i*(i+1)/2]<<" ";
                    else cout<<0<<" ";
                }
                cout<<endl;
            }

        }
};














int main(){

    
    lowerTri d(5);

    d.set(0,0,1);
    d.set(1,0,1);
    d.set(1,1,1);
    d.set(2,0,1);
    d.set(2,1,1);
    d.set(2,2,1);
    d.set(3,0,1);
    d.set(3,1,1);
    d.set(3,2,1);
    d.set(3,3,1);
    d.set(4,0,1);
    d.set(4,1,1);
    d.set(4,2,1);
    d.set(4,3,1);
    d.set(4,4,1);
    d.set(5,0,1);
    d.set(5,1,1);
    d.set(5,2,1);
    d.set(5,3,1);
    d.set(5,4,1);
    d.set(5,5,1);
  

    d.dispaly();




    return 0;
}