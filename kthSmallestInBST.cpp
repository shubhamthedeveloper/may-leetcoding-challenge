/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
   void inorder(vector<int>& res,TreeNode* root){
        if(root == NULL)
            return;
        inorder(res,root->left);
        res.push_back(root->val);
        inorder(res,root->right);        
} 
    
    //RECURSION INORDER
   int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        inorder(res,root);
        return res.at(k-1);

        
        
    } 
    
    //ITERATIVE ALGO
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<TreeNode*> st;
        
        while(true){
            while(root!= NULL){
                st.push(root);
                root=root->left;
            }
            
            root = st.top();
            st.pop();
            if(--k == 0) return root->val;
            root = root->right;
        }
    }
};