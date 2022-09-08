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
    
    void DFS(TreeNode* root, int &total) // right, center, then left
    {
        if(!root)
            return;
        
        if(root->right)
        {
            DFS(root->right,total);
        }
        
        root->val += total;
        total = root->val;
        
        if(root->left)
        {
            DFS(root->left,total);
        }
    }
    
    
    TreeNode* convertBST(TreeNode* root) {
        int total = 0;
        DFS(root,total);
        return root;
    }
};
