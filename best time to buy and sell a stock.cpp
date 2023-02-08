class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); // size of the array
        int maxpro = 0;   // declaring maxprofit as zero
        int minval =  INT_MAX;  //intially making mival as max element
        for(int i=0;i<n;i++)
        {
            minval = min(minval,prices[i]);  // iterating and changing the minval
            maxpro = max(maxpro,prices[i]-minval);  // iterating and finding the mival by subracting current value of array and minval
// coz maximum profit will occur when you by low and sell high
        }
        return maxpro;  
    }
};
