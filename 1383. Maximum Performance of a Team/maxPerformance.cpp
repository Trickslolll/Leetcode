class Solution {
public:
    
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> candidates(n);
        
        for(int i = 0 ; i < n ; i++)
        {
            // push the whole information into vector
            candidates[i] = {efficiency[i],speed[i]};
        }
        
        sort(candidates.rbegin(),candidates.rend());
        
        long sum_speed = 0 , ans = 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(auto &[_efficiency , _speed] : candidates)
        {
            pq.push(_speed);
            
            sum_speed += _speed;
            
            if(pq.size() > k)
            {
                sum_speed -= pq.top();
                pq.pop();
            }
            
            
            // we can directly multiply _efficiency because it has been sorted in decreasing order
            ans = max(ans,sum_speed*_efficiency);
        }
        
        return ans % (long)(1e9+7);
        
    }
};
