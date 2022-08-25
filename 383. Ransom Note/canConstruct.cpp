class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26);
        for(int i = 0 ; i < magazine.length(); i++)
        {
            count[magazine[i]-97]++;
        }
        
        for(int i = 0 ; i < ransomNote.size(); i++)
        {
            if(count[ransomNote[i]-97] == 0)
                return false;
            else count[ransomNote[i]-97]--;
        }
        return true;
    }
};
