class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int gap = (arr.at(1)-arr.at(0));
        for(int i = 1 ; i < arr.size()-1; i++)
        {
            if(arr.at(i+1)-arr.at(i) != gap)
                return false;
        }
        return true;
    }
};
