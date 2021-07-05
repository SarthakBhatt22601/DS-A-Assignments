#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int>& encoded, int first)
{
    vector<int> res;
    res.push_back(first);
    for(int i=0;i<encoded.size();i++)
    {
        int n = res[i]^encoded[i];
        res.push_back(n);
    }
    return res;
}

int main()
{
    int n, key;
    cin>>n;
    vector<int> encoded;
    for (int i=0;i<n;i++)
        cin>>encoded[i];
    cin>>key;
    vector<int> res = decode(encoded, key);
    for (int num : res)
        cout<<num<<" ";
    return 0;    
}