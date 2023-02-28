class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = (n/3);
        vector<int>ans;
        unordered_map<int,int>map;
        for(int i=0;i<n;i++) map[nums[i]]++;
        for(auto i:map)
        {
         if(i.second>m) ans.push_back(i.first);
        }
        return ans;
    }
};
