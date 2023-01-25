class Solution {
public:
  
   int pivot(vector<int>& nums, int target)
   {
       int n = nums.size();
       int low=0;
       int high = n-1;
       int mid = low+(high-low)/2;
       while(low<high)
       {
           mid = low+(high-low)/2;
           if(nums[mid]>=nums[0])
           {
               low=mid+1;
           }
           else high=mid;
       }
       return low;
   }

   int bsearch(vector<int>& nums,int low,int high,int target)
   {
       int n = nums.size();
       int mid = low+(high-low)/2;
       while(low<=high)
       {
           mid = low+(high-low)/2;
           if(nums[mid]==target) return mid;
           if(nums[mid]>target) high=mid-1;
           if(nums[mid]<target) low=mid+1;
       }
       return -1;
   }

    int search(vector<int>& nums, int target) {
        int p = pivot(nums,target);
        int n = nums.size();
        if(target >= nums[p] && target <= nums[n-1])
        {
            return bsearch(nums,p,n-1,target);
        }
        else
        {
            return bsearch(nums,0,p-1,target);
        } 
        
    }
};
