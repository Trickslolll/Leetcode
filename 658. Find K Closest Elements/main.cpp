class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<pair<int,int>> vec(n);
        vector<int> ans(k);
        
        for(int i = 0 ; i < n; i++)
        {
            vec[i] = {abs(arr[i]-x),arr[i]};
        }
        
        sort(vec.begin(),vec.end());
        
        for(int i = 0 ; i < k ; i++)
        {
            ans[i] = vec[i].second;
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
