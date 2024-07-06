#include <bits/stdc++.h>
using namespace std;



class Diagonal{

    int n;
    int *A;


    public:

        Diagonal(int n){
            this->n = n;
            A = new int[this->n];
        }

        ~Diagonal(){
            delete[] A;
        }

        void set(int i, int j, int x){

            if(i==j){
                A[i] = x;
            }

        }
        int get(int i, int j){
            if(i==j) return A[i];
            else return 0;
        }

        void dispaly(){

            for(int i = 0; i<n; i++){
                for(int j =0 ; j<n; j++){
                    if(i==j) cout<<A[i]<<" ";
                    else cout<<0<<" ";
                }
                cout<<endl;
            }

        }
};














int main(){

    
    Diagonal d(5);

    d.set(0,0,1);
    d.set(1,1,2);
    d.set(2,2,3);
    d.set(3,3,4);
    d.set(4,4,5);

    d.dispaly();




    return 0;
}