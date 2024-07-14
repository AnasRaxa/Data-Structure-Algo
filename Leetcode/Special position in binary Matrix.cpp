class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int result = 0;

        vector<int>row(m,0);
        vector<int>col(n,0);

        for(int i = 0; i<m; i++){
            for(int j =0; j<n; j++){

                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }

            }
        }

        for(int i = 0; i<m; i++){
            for(int j =0; j<n; j++){

                if(mat[i][j]==1){
                    
                    if(col[j]==1 && row[i] == 1){
                        result++;
                    }
                    
                }

            }
        }


        return result;
        
    }
};










class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int result = 0;

        

        for(int i = 0; i<m; i++){
            for(int j =0; j<n; j++){

                if(mat[i][j]==1){
                    
                    bool ok = true;
                    for(int c = 0; c<n; c++){
                        if(c!=j && mat[i][c] == 1) ok = false;
                    }
                    for(int r = 0; r<m; r++){
                        if(r!=i && mat[r][j] == 1) ok = false;
                    }

                    if(ok){
                        result++;
                    }



                }

            }
        }

        


        return result;
        
    }
};