class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // int m=0;
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int m = low+(high-low)/2;
            if(nums[m]==target)
            {
                return m;
            }
            if(nums[m]<target)
            {
                low=m+1;
            }
            if(nums[m]>target)
            {
                high=m-1;
            }
        }
        return -1;
    }
};
