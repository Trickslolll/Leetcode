class Solution {
public:
    double average(vector<int>& salary) {
        //divide salary.length()-2  (front&rear)
        int maximum= 999,minimum = 1000001,sum = 0;
        for(int i = 0 ; i < salary.size(); i++)
        {
            sum += salary[i];
            maximum = max(salary[i],maximum);
            minimum = min(salary[i],minimum);
        }
        sum -= (maximum+minimum);
        return (double)sum/(salary.size()-2);
    }
};
