class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s1=0, s2 = n*(n+1)/2;
        for(int i:nums)
            s1 += i;
        return s2-s1;
    }
};