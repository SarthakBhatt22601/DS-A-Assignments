class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> s(banned.begin(),banned.end());
        unordered_map<string,int> m;
        for(int i=0;i<paragraph.size();i++)
            paragraph[i] = isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' '; 
        stringstream pg(paragraph);
        string word;
        while(pg>>word){
            if(s.find(word) == s.end())
                m[word]++;
        }
        int freq = 0;
        string temp;
        for(auto word:m)
        {
            if(word.second > freq)
            {
                temp = word.first;
                freq = word.second;
            }
        }
        return temp;
    }
};