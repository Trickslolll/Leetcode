class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if((n % 3 != 0 || n == 0 || n < 0) && n != 1) // power of three will not be a negative number or zero
            return false;
        if(n == 1) // 3^0
            return true;
        do
        {
            if(n % 3 != 0)
                return false;
            n /= 3;
        }while(n >= 2);
        
        return true;
    }
};
