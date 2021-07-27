class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++)
        {
            int count = 0;
            for(int j=0;j<mat.size();j++)
            {
                if(mat[i][j] == 1)
                    count++;
            }
            v.push_back(make_pair(i,count));
        }
        sort(v.begin(),v.end(),[=](pair<int,int> a, pair<int,int> b){if(a.second == b.second)           {return a.first<b.first;} return a.second<b.second;});
        vector<int> res;
        for(int i=0;i<k;i++)
            res.push_back(v[i].first);
        return res;
    }
};