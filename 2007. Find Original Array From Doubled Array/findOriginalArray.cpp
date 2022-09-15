class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        if((changed.size() & 1) == 1)
            return ans;
        
        unordered_map<int,int> umap; // structure: value, how many times did it appear
        
        sort(changed.begin(),changed.end());
        
        for(int i = 0 ; i < changed.size(); i++)
        {
            if(umap.count(changed[i]) == 0)
            {
                if(umap.count(changed[i]*2) == 1)
                {
                    umap[changed[i]*2] += 1;
                }
                else
                    umap[changed[i]*2] = 1;
            }
            else
            {
                umap[changed[i]] -= 1;
                ans.push_back(changed[i]/2);
                if(umap[changed[i]] == 0)
                {
                    umap.erase(changed[i]);
                }
            }
        }
        
        if(!umap.empty())
            return {};
        
        return ans;
    }
};
