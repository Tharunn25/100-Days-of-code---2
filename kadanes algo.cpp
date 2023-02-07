class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algorithm 
        // carry a subarray untill it's sum gives 0
        int sum = 0;   // declaring intially sum as zero
        int ans = INT_MIN; // at first declaring ans as min
        for(auto i:nums)   // iteraring the array nums
        {
            sum += i;      // finding the sum of the elements
            ans = max(sum,ans);   // ans is the max of the sum and the ans
            if(sum<0) sum=0;   // if sum is  less than zero then no use so we will make sum as zero
        }
        return ans; // atlast we are returning ans
    }
};
