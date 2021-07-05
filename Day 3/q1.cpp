#include <bits/stdc++.h>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            res.push_back(count);
        }
        return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for (int i=0;i<n;i++)
        cin>>nums[i];
    vector<int> res = smallerNumbersThanCurrent(nums);
    for (int num : res)
        cout<<num<<" ";
    return 0;
}