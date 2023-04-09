class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>a{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        set<string> s;

        for(int i=0;i<words.size();i++)
        {
            string p = " ";
            for(int j=0;j<words[i].size();j++)
            {
                p += a[words[i][j]-'a'];
            }
            s.insert(p);
        }
        return size(s);
        
        
    }
};
