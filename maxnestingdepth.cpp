class Solution {
public:
    int maxDepth(string s) {
        int curr_depth = 0;
        int max_depth = 0;
        int n = s.size();
        for(char c : s)
        {
            if(c == '(')
            {
                curr_depth += 1;
                max_depth = max(curr_depth, max_depth);
            }
            else if(c == ')')
            {
                curr_depth--;
            }
        }
        return max_depth;
    }
};
