class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size() == 1) return false;
        string mainstring = s + s;
        if(s.size() == goal.size())
        {
            if(mainstring.find(goal) != string::npos)
            {
                return true;
            }
        }
        
        return false;
    }
};
