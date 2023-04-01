class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int ans;
        sort(nums.begin(),nums.end());
            int max = nums[n-1]*nums[n-2];
            int min = nums[0]*nums[1];
            ans = max-min;
        return ans;
    }
};
