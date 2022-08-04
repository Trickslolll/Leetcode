class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int total = 0;
        total += (rungs[0]-1)/dist;
        for(int i = 0 ; i < rungs.size()-1; i++)
        {
            total += (rungs[i+1]-rungs[i]-1)/dist;
        }
        return total;
    }
};
