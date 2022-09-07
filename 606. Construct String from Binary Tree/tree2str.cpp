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
    void preorder(TreeNode* root, string &output)
    {
        if(!root) return;
        //cout << root->val << endl;
        output += to_string(root->val);
        int flag = 0;
        if(root->left)
        {
            flag = 1;
            output += "(";
            preorder(root->left,output);
            output += ")";
        }
        
        if(!root->left && root->right)
        {
            output += "()";
            flag = 0;
        }
            
        
        if(root->right)
        {
            flag = 1;
            output += "(";
            preorder(root->right,output);
            output += ")";
        }
        
        
    }
    
    string tree2str(TreeNode* root) {
        string output="";
        preorder(root, output); 
        return output;
    }
};
