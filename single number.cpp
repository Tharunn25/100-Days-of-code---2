class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0; // declaring ans as zero
        for(auto x:nums)   // iterating the arr with x as iteration
        {
            ans = ans^x;  // we are using bitwise operator if we have same elements it will return 0 but we need the different element from the other so it will return the ans
        }
        return ans;
//yfufufu



    }
};
