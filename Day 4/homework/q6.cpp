class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        for(auto i:arr)
        {
            int n=i,one=0;
            while(n>0)
            {
                if(n%2==1)
                    one++;
                n=n/2;
            }
            v.push_back(make_pair(i,one));
        }
        sort(v.begin(),v.end(),[=](pair<int,int> &a, pair<int,int> &b) 
                                                    {if(a.second == b.second)
                                                        { return a.first<b.first;}
                                                    return a.second<b.second;
                                                    });
        for(int i=0;i<arr.size();i++)
        {
            arr[i] = v[i].first;
        }
        return arr;
    }
};