class Solution {
public:
    bool isHappy(int n) {
        if((n / 10) <= 0)
        {
            if(n == 7 || n == 1)
                return true;
            else return false;
            
        }
        
        int sum = 0;
        
        while(n > 0)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        
        if(sum == 1)
            return true;
        else
        {
            return isHappy(sum);
        }
    }
};
