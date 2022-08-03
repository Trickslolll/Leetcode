class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int total = mat.size()*mat[0].size();
        if((total > r*c) || (total % r != 0) || total %c != 0)
        {
            return mat;
        }
        int x = 0 , y = 0; // current location of scanned orginal matrix
        int count = 0;
        c = total/r;
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i = 0 ; i < r ; i++) // y axis
        {
            for(int j = 0 ; j < c ; j++) // x axis
            {
                if(count > total)
                {
                    return ans;
                }
                
                ans[i][j] = mat[y][x];
                x++;
                count++;
                if(x >= mat[0].size())
                {
                    x = 0;
                    y++;
                }
            }
        }
        return ans;
    }
};
