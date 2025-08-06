class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m) return false;
        unordered_map<char, char> mapstot;
        unordered_map<char, char> mapttos;
        for(int i = 0; i<n; i++)
        {
            char chars = s[i];
            char chart = t[i];
            if(mapstot.count(chars))
            {
                if(mapstot[chars] != chart)
                {
                    return false;
                }
            }
            else
            {
                mapstot[chars] = chart;
            }

            if(mapttos.count(chart))
            {
                if(mapttos[chart] != chars)
                {
                    return false;
                }
            }
            else
            {
                mapttos[chart] = chars;
            }
        }
        return true;
    }
};
