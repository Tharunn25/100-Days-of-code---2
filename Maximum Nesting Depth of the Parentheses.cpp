class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int len = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') len++;
            if(s[i]==')') len--;
            ans = max(ans,len);
        }
        return ans;    
    }
};
