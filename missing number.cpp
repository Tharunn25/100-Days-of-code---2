class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int sum = n*(n+1)/2;
        for(auto x:nums)
        {
            ans+=x;
        }
        return sum-ans;

        
    }
};
