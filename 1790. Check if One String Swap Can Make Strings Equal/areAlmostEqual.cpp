class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int position = -1; // first word to swap.
        bool flag = false; // record if the only one swap oppounity is used.
        for(int i = 0 ; i < s1.length();i++)
        {
            if(s1[i] != s2[i])
            {
                if(position == -1 && flag == false)
                {
                    position = i;
                }
                else if(position != -1 && flag==false) // swap
                {
                    if((s2[i] != s1[position]) || s1[i] != s2[position])
                        return false;
                    
                    flag = true;
                }
                else
                {
                    return false;
                }
            }
            
        }
        if(position != -1 && flag == false)
            return false;
        return true;
    }
};
