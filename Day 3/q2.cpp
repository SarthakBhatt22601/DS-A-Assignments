#include <bits/stdc++.h>

using namespace std;

string restoreString(string s, vector<int>& indices)
{
    string res = s;
    for(int i=0;i<indices.size();i++)
        res[indices[i]] = s[i];
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> indices;
    for (int i=0;i<n;i++)
        cin>>indices[i];
    string s;
    cin>>s;
    string res = restoreString(s, indices);
    cout<<res;
    return 0;
}
