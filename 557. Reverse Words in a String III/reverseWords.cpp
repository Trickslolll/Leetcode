class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans="";
        
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s.substr(i,1) != " ")
            {
                st.push(s.substr(i,1));
            }
            else
            {
                while(!st.empty())
                {
                    ans += st.top();
                    st.pop();
                }
                ans += " ";
            }
        }
        
        // final check
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};
