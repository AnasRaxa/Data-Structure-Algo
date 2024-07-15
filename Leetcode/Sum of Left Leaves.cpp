/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


    int solve(TreeNode* curr,TreeNode* parent){

        if(curr == nullptr) return NULL;

        if(curr->left == nullptr && curr->right == nullptr){

            if(parent != nullptr && parent->left == curr){
                
                return curr->val;

            }


        }

        int left = solve(curr->left,curr);
        int right = solve(curr->right,curr);


        return left + right;



    }









    int sumOfLeftLeaves(TreeNode* root) {

        return solve(root,NULL);
        
    }
};








/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


    int solve(TreeNode* curr,bool isLeft){

        if(curr == nullptr) return NULL;

        if(curr->left == nullptr && curr->right == nullptr && isLeft){

            
                
                return curr->val;

            


        }

        int left = solve(curr->left,true);
        int right = solve(curr->right,false);


        return left + right;



    }









    int sumOfLeftLeaves(TreeNode* root) {

        return solve(root,false);
        
    }
};