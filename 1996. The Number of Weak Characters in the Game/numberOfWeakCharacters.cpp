class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int count = 0;
        int maximum = -1;
        
        // sorting the first element, then compare the second one.
        sort(properties.begin(),properties.end(),comp);
        
        for(int i = properties.size()-1; i >= 0; i--)
        {
            if(properties[i][1] < maximum)
                count++;
            maximum = max(maximum,properties[i][1]);
        }
        return count;
    }
};
