class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());     // reversing the whole sentence

        int i=0;            // this will traverse the whole string

        int l=0,r=0;         // l will remeber the start of the word and r will remember the end of the word
        int n = s.size();
        while(i<n)
        {
        while(i<n && s[i] !=' ') // while i is less than n and i is not equal to the space
        {
            s[r]=s[i];    // s[i] will become s[r]
            i++;          // we are incrementing both i and r
            r++;
        }
        if(l<r) // l should be obviously less than r to reverse words starting position can't be bigger the end pos
        {
         reverse(s.begin()+l,s.end()+r); // we are reversing the particular character
         s[r]=' ';     // we are giving a space after we have reversed it
         r++;          // incrementing the r
         l=r;          // we are making l to be in the first position of nxt letter
        }
       i++; 
        }
        s = s.substr(0,r-1); // because we will be having space at last, so till last before element only
        return s;
    }
};
