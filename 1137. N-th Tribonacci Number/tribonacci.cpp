class Solution {
public:
    int tribonacci(int n) {
        if(n == 0)
            return 0;
        else if(n < 3)
            return 1;
        else
        {
            int first = 0, second = 1, third = 1;
            for(int i = 0 ; i < n-2 ; i++)
            {
                int next = first+second+third;
                first = second;
                second = third;
                third = next;
            }
            return third;
        }
    }
};
