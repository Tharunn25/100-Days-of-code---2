class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto i : nums)
        {
            int noloop=0;
            while(i!=0)
            {
                noloop++;
                i/=10;
            }
            if(noloop%2==0)count++;
        }
        return count;
    }
};
