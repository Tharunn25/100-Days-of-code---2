class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(); // size of s
        int m = t.size(); // size of t
        if(n!=m) return false; // if both size are not equal then it's the best case to say it's false

        int m1[256] = {0};  // creating a map for 256 total character in ascii is 256
        int m2[256] = {0};
        for(int i=0;i<n;i++)   // creating a for loop to traverse till n 
        {
            if(!m1[s[i]] && !m2[t[i]])  // if the first character of both string is not alread mapped
            {
                m1[s[i]]=t[i];   // we are mapping with alternate string 
                m2[t[i]]=s[i];
            }
            else if(m1[s[i]]!=t[i]) return false;  // if any of the map is found to be not equal we are
        }                                          // returning false
        return true;  //else true
    }
};
