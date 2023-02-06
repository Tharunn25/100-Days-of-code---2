class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; //lowest will be 1
        int high = *max_element(piles.begin(),piles.end()); //max answer can be the max of the array
        int ans = 0;
        while(low<=high)   // binary search
        {
            int mid = low+(high-low)/2;  // mid
            int time = timecalc(piles,mid);  // creating func to calc time
            if(time<=h)   // if time is less than or equal to give time h
            {
              ans = time;   // store that ans 
              high=mid-1;   // now search for the best answer
            }
            else low=mid+1;  // else search in the left side of the array
        }
        return ans;     // return the ans
    }
        int timecalc(vector<int>& piles, int mid)  // function to calc time
        {
            int sum = 0;
            for(int i=0;i<piles.size();i++)
            {
                sum+= (piles[i]/mid)+((piles[i]%mid)!=0);
            }
            return sum;
        }    
};
