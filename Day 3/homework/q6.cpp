class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> m;
        for (char i : allowed)
            m[i]++;
        int count = 0;
        for (auto word : words)
        {
            int flag = 0;
            for (char ch : word)
            {
                if (m[ch])
                    continue;
                flag = 1;
            }
            if (flag == 0)
                count++;
        }
        return count;
    }
};