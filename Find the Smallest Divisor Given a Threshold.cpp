class Solution {
public:
    bool helper(vector<int> nums,int threshold,int mid)
        {
            long long int sum = 0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%mid==0) sum+=nums[i]/mid;
                else sum+=nums[i]/mid+1;
            }
            return(sum<=threshold);
        }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low=1;
        int high=1000001;
        int ans = 0;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(helper(nums,threshold,mid))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
              low = mid+1;
            }   
        }
        return ans;
        
    }
};
