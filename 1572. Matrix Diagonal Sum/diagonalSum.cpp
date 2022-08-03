class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        if(mat.size() == 1)
            return mat[0][0];
        int sum=0;
        // cross point when odd number: mat[mat.size()/2][mat.size()/2]
        
        for(int i = 0; i < mat.size()/2; i++)
        {
            sum += mat[i][i]+mat[i][mat.size()-1-i];
            sum += mat[mat.size()-1-i][i]+ mat[mat.size()-1-i][mat.size()-1-i];
        }
        if(mat.size() & 1 == 1)
        {
            sum += mat[mat.size()/2][mat.size()/2];
        }
        return sum;
    }
};
