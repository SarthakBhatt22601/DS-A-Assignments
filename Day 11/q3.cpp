class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> idx;
        vector<int> res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == c)
                idx.push_back(i);
        }
        for(int i=0;i<s.size();i++)
        {
            int min = INT_MAX;
            for(auto j:idx)
            {
                if(abs(i-j) < min)
                    min = abs(i-j);
            }
            res.push_back(min);
        }
        return res;
    }
};