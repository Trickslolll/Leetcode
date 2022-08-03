class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minimum = INT_MAX;
        int index = -1;
        for(int i = 0 ; i < points.size(); i++)
        {
            if(x == points[i][0] && y == points[i][1])
            {
                index = i;
                break;
            }
            else if(x == points[i][0])
            {
                if((abs(points[i][0]-x)+abs(points[i][1]-y)) < minimum)
                {
                    minimum =abs(points[i][0]-x)+abs(points[i][1]-y);
                    index = i;
                }
                    
            }
                
            else if(y == points[i][1])
            {
                if((abs(points[i][0]-x)+abs(points[i][1]-y)) < minimum)
                {
                    minimum =abs(points[i][0]-x)+abs(points[i][1]-y);
                    index = i;
                }
            }
                
        }
        
        return index;
    }
};
