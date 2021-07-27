class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1, sum, c=0;
        string s="";
        while(i>=0 || j>=0)
        {
            sum = c;
            if(i>=0)
                sum += a[i--] - '0';
            if(j>=0)
                sum += b[j--] - '0';
            s += to_string(sum&1);
            c = sum>>1;
        }
        if(c)
            s += to_string(c);
        reverse(begin(s), end(s));
        return s;
    }
};