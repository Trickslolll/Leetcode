class Solution {
public:
    string removeDuplicates(string s) {
        // erase(index,amount);
        
        bool done = false;
        
        while(!done)
        {
            done = true;
            
            
            for(int i = s.length()-1; i >= 1 ; i--)
            {
                if(s[i-1] == s[i])
                {
                    s.erase(i-1,2);
                    done = false;
                }
            }
            
            if(s.length() < 2)
                break;
            
        }
        
        return s;
    }
};
