class Solution {
public:
    double factor(int x)
    {
        double ans = 1;
        for(int i = x ; i >= 1 ; i--)
        {
            ans *= i;
        }
        return ans;
    }
    
    int uniquePaths(int m, int n) {
        m--;
        n--;
        int total = m+n;
        long double ans = 1;
        
        for(int i = total; i > total - min(m,n) ; i--)
            {
                ans *= i;
            }
            ans /= factor(min(m,n));
        return ans;
    }
};
