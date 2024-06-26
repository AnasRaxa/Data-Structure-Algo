    int row[] = {-1,1,0,0};
    int col[] = {0,0,-1,1};
    string dir = "UDLR";

    bool valid(int i, int j ,int n){
        return (i>=0 && j>=0 && i<n && j<n);
    }


    void total(vector<vector<int>>&matrix,int i,int j,int n,string path,vector<vector<bool>>visited,vector<string>&ans){


        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }

        visited[i][j] = 1;


        for(int k = 0; k<4; k++){

            if(valid(i+row[k],j+col[k],n) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]]){
                path.push_back(dir[k]);
                total(matrix,i+row[k],j+col[k],n,path,visited,ans);
                path.pop_back();
            }

        }



    }





// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1