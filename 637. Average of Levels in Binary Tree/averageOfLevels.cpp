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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> answer;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double sum = 0;
            int levelsize = q.size();
            for(int i = 0 ; i < levelsize; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            answer.push_back(sum/levelsize);
        }
        return answer;
    }

};
