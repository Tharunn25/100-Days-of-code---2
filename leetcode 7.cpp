class Solution {
public:
    int reverse(int x) {
        int num,rem;
        int reverse=0;
        num=x;
        while(num!=0)
        {
            if(reverse>INT_MAX/10||reverse<INT_MIN/10) return 0;
            rem=num%10;
            reverse= reverse*10+rem;
            num=num/10;
        }
        return reverse;
        
    }
};
