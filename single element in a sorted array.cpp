class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int high=n-2;
        int mid=low+(high-low/2);
        while(low<=high)
        {
          if(nums[mid]==nums[mid^1]) low=mid+1;  // XOR property
          else high=mid-1; 
          mid=low+(high-low/2);
        }
        return nums[low];
    }
    // chech whether it's in left side
    // so 1st instance of the number even index no.
    // 2nd instance of the number odd index no.
    // even xor -> next odd occurence
    // odd xor -> previous even occurence
};
