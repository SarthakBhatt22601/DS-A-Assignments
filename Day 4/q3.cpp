class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> m = {{'a' ,".-"},{'b' ,"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},
        {'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},
        {'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},
        {'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."}};
        set<string> s;
        for(string word:words)
        {
            string code = "";
            for(char ch:word)
                code += m[ch];
            s.insert(code);
        }
        return s.size();
    }
};