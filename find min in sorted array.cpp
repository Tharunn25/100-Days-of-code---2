class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int minval = INT_MAX; 
        while(low<=high)
        {
           if(nums[low]<=nums[high])
           {
              minval=min(minval,nums[low]);
              break;
           }
           int mid = low+(high-low)/2;

           if(nums[low]<=nums[mid])
           {
               minval=min(minval,nums[low]);
               low=mid+1;
           }
           else
           {
             minval=min(minval,nums[mid]);
             high=mid-1;
           }
        }
      return minval;  
    }
};
