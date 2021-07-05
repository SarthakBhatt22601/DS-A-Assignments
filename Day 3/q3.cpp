#include<bits/stdc++.h>

using namespace std;

vector<int> decompressRLElist(vector<int>& nums)
{
    vector<int> res;
    for(int i=0;i<nums.size();i=i+2)
    {
        for(int j=0;j<nums[i];j++)
            res.push_back(nums[i+1]);
    }
    return res;
}


int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
        cin>>nums[i];
    vector<int> res=decompressRLElist(nums);
    for(int i : res)
        cout<<i<<" ";
    return 0;
}