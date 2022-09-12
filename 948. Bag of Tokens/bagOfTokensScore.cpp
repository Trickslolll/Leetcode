class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int N = tokens.size();
        // special cases
        if(N == 0)
            return 0;
        if(N == 1)
        {
            if(tokens[0] < power)
                return 1;
            else
                return 0;
        }
        
        int ans = 0, add = 0, index = 0, count = 0; // using count to know where to stop(count >= token.size())
                                                    // using index to record which position of tokens to check
        bool confirm = false; // if trading score for power doesn't use at the end, plus it back (variable add)                                    
        // concept: big token:   exchange score to power(score--, but power += token)
        //          small token: exchange power to score(score++, but power -= token)
        
        // By sorting tokens first, the problem will be easier
        sort(tokens.begin(),tokens.end());
        
        while(count < N)
        {
            if(tokens[index] <= power && (power - tokens[index]) >= 0  )  // exchange power to score
            {
                power -= tokens[index];
                ans++;
                index++;
                confirm = true;
                add = 0;
            }
            else if(ans > 0)  // exchange score to power, if and only if score is at least one
            {
                power += tokens[tokens.size()-1]; // using tokens.size() because pop_back() will change size of vector
                ans--;
                tokens.pop_back();
                confirm = false;
                add++; // record how many useless trade is applied. (if it's useful, we'll reset add)
            }
            count++;
        }
        
        if(!confirm)    
            ans += add;
        
        return ans;
        
    }
};
