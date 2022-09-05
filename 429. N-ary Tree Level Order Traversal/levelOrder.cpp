/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> answer;
        vector<int> info;
        queue<Node*> q;
        
        if(root){
            q.push(root);
        }
        
        
        while(!q.empty())
        {
            int levelsize = q.size();
            
            for(int i = 0 ; i < levelsize; i++)
            {
                Node* temp = q.front();
                q.pop();
                info.push_back(temp->val);
                
                for(int j = 0 ; j < temp->children.size(); j++)
                {
                    q.push(temp->children[j]);
                }
                
            }
            
            answer.push_back(info);
            info.clear();
        }
        
        
        return answer;
    }
};
