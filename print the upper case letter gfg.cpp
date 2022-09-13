
class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	//code here.
    	int count =0;
    	for(int i=0;i<s.size();i++){
    	    if(s[i] >= 65 && s[i] <= 90){
    	        count++;
    	    }
    	}
    	return count;
    }
};
