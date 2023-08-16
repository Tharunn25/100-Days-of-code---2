class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size(); // to find the length of the string
        if(n==1) return "";    // if we have empty string we are returning empty space
        for(int i=0;i<n;i++)   // running a for loop
        {
            int j = n-1-i;   // checking if the i is in middle element if it is in middle element we can't change it make it palindrome
            if(i==j) continue;  // so we are leaving it as it is

            if(palindrome[i] != 'a')  // we are finding the first non letter a and changing it into a
            {
                palindrome[i]='a';
                return palindrome;  // and returning the answer
            } 
        }
        palindrome[n-1]='b';  // if the whole string is full of a the we change the last character to b
        return palindrome;  // atlast we are returning the given string
        
    }
};
