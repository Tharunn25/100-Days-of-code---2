class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ans(n,0);  //making a vector in the same size of the given array
        int pi = 0;  // +ve integer is 0 (0,2,4,6)
        int ni = 1;  // -ve integer is 1 (1,3,5,7)
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0) // if it's a +ve element we adding the element element in the pi pos of given ary
            {
                ans[pi]=nums[i];
                pi+=2;  // incrementing the value by 2 
            }
            else
            {
                ans[ni]=nums[i]; // if it's a -ve element we adding the element in the ni pos of given ary
                ni+=2;
            }
        }
        return ans;
    }
};
