class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())
            return false;
        vector<int> s1(26);
        vector<int> s2(26);
        for(int i = 0 ; i < s.length(); i++)
        {
            s1[((int)s[i]-97)]++;
            s2[((int)t[i]-97)]++;
        }
        for(int i = 0 ; i < 26 ; i++)
        {
            if(s1[i] != s2[i])
                return false;
        }
        return true;
    }
};
