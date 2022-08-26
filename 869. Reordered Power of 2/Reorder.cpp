class Solution {
public:
    int calculateLength(int n){
        int count = 0;
        while(n > 0)
        {
            count++;
            n /= 10;
        }
        return count;
    }
    
    vector<int> pushVector(int n){
        vector<int> count(10);
        while(n > 0)
        {
            count[n%10]++; // record number count
            n /= 10;
        }
        return count;
    }
    
    bool reorderedPowerOf2(int n) {
        if(n == 1) return true;
        vector<int> count(10);
        int length = calculateLength(n);
        int now = 1;
        count = pushVector(n);
        
        while(true)
        {
            now *= 2;
            if(calculateLength(now) == length) // the same digit
            {
                vector<int> input(10);
                input = pushVector(now);
                if(input == count) return true;
            }
            else if(calculateLength(now) > length) return false; // no match result
        }
        
    }
};
