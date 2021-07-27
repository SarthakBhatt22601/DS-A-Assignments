class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> s1{'q','w','e','r','t','y','u','i','o','p'};
        set<char> s2{'a','s','d','f','g','h','j','k','l'};
        set<char> s3{'z','x','c','v','b','n','m'};
        vector<string> res;
        int flag = 0;
        for(auto word:words)
        {
            if(s1.find(tolower(word[0])) != s1.end())
                flag = 1;
            else if(s2.find(tolower(word[0])) != s2.end())
                flag = 2;
            else
                flag = 3;
            for(int i=0;i<word.size();i++)
            {
                if(flag == 1 && s1.find(tolower(word[i])) == s1.end())
                {
                    flag = 0;
                    break;
                }
                else if(flag == 2 && s2.find(tolower(word[i])) == s2.end())
                {
                    flag = 0;
                    break;
                }
                else if(flag == 3 && s3.find(tolower(word[i])) == s3.end())
                {
                    flag = 0;
                    break;
                }
            }
            if(flag != 0)
                res.push_back(word);
        }
        return res;
    }
};