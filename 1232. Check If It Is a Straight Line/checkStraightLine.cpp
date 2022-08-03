class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 2)
            return true;
        int flag = 0; // change to 1 if vertical line appear
        int x;
        double m,k;
        try
        {
            if((coordinates[0][0]-coordinates[1][0]) == 0)
            {
                throw 0;
            }
            m = (double)(coordinates[0][1]-coordinates[1][1])/(coordinates[0][0]-coordinates[1][0]);
            k = (double)coordinates[0][1]-m*coordinates[0][0];
        }
        catch(...)
        {
            flag = 1;
            x = coordinates[0][0];
        }
        // y = m*x + k(not vertical line)
        if(flag == 0){
            for(int i = 2; i < coordinates.size();i++)
            {
                if(coordinates[i][1] != m*coordinates[i][0]+ k)
                    return false;
            }
        }
        else //(vertical line)
        {
           for(int i = 2; i < coordinates.size();i++)
            {
                if(coordinates[i][0] != x)
                    return false;
            } 
        }
        
        return true;
    }
};
