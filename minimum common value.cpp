class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto i:nums1) mp[i]++;

        for(auto i:nums2)
        {
            if(mp.find(i) != mp.end()) return i;
        }
        return -1;
        
    }
};
