class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;  // creating a map
        int curr = 0;  // declaring current as zero
        for(auto i: arr)mp[i]++;  // pushing the character and frequency in the map
        for(auto i: arr)  // traversing the array
        {
            if(mp[i]>1) continue;  // if the frequency is greater than one then loop will start from first
            curr++;                // if the frequency is one then incrementing the current
            if(curr==k) return i;  // if the current and k is same we are returning i
        }
        return "";   // else we are returning empty space
    }
};
