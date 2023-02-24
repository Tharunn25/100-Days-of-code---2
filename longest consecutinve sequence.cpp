class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> hash;  // creating a set 
        for(int num : nums)  
        {
            hash.insert(num);  // inserting the values of array in the set
        }
        int ls = 0;  // longest streak = 0

        for(int num : nums)  // iterating the nums
        {
            if(!hash.count(num-1))
            {
                int cn = num;  // declaring currnet num as num
                int cs = 1;   // declaring currenstreak as 1

                while(hash.count(cn+1))  // iterating the hash
                {
                    cn += 1;    // if we found the next iterative element we are incrementin currnet num by 1
                    cs += 1;    // if we found the next iterative element we are incrementing the current sum by 1
                }
                  ls = max(ls,cs);   
            }
        }
        return ls;    // returing longest streak
    }
};
