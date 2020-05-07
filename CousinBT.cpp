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
    
    TreeNode* helper(TreeNode* root, int x,int depth,int& level){
        if(!root) return nullptr;
        
        if((root->left && root->left->val == x) ||(root->right && root->right->val == x) ){
            level = depth;
            return root;
        }
        
        TreeNode* left = helper(root->left,x,depth+1,level);
        if(left) return left;
            TreeNode* right = helper(root->right,x,depth+1,level);
        if(right) return right;
     return nullptr;
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        int xDp = -1; int yDp = -1;
        TreeNode* xPr = helper(root,x,0,xDp); 
        TreeNode* yPr = helper(root,y,0,yDp);
        
        if(xPr == yPr || xDp != yDp)
            return false;
        return true;
        
    }
};