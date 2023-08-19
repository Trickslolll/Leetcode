class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int pos1 = 0, pos2 = 0;
        while(1){
            if(pos1 < word1.length()){
                ans += word1[pos1++];
            }
            if(pos2 < word2.length()){
                ans += word2[pos2++];
            }
            if(pos1 >= word1.length() && pos2 >= word2.length()){
                break;
            }
        }
        return ans;
    }
};
