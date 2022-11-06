class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	  string t=s;
	  reverse(t.begin(),t.end());
	  
	  if(t==s)
	  {
	      return 1;
	  }
	  else
	  {
	      return 0;
	  }
	}

};
