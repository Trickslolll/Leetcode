class Solution {
public:
    int maxPower(string s) {
        if(s.size() < 1 || s.size() > 500){
            return 0;
        }
        int now = 1 , max = 1;
        if(s.size()==1)
            return 1;
        for(int i = 0 ; i < s.size()-1 ; i++){
            if((int)s[i] < 61 || (int)s[i] > 122)
                return 0;
            else{
                if(s[i] == s[i+1]){
                    now += 1;
                    if(now >= max)
                        max = now;
                }
                else{
                    if(now >= max){
                        max = now;
                        now = 1;
                    }
                    else
                        now = 1;
                }
            }
            
        }
        return max;
    }
};
