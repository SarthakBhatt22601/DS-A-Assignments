class Solution {
public:
    vector<int> countBits(int n){
        vector<int> res{0};
        for(int i=1;i<=n;i++)
        {
            int num=i, count=0;
            while(num>0)
            {
                if(num%2 == 1)
                    count++;
                num /= 2;
            }
            res.push_back(count);
        }
        return res;
    }
};