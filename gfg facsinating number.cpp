//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    int n1 = n*2;
	    int n2 = n*3;
	    string s5="123456789";
	    string s1 = to_string(n1);
	    string s2 = to_string(n2);
	    string s3 = to_string(n);
	    
	    string s4 = s1+s2+s3;
	    sort(s4.begin(),s4.end());
	    if(s4.compare(s5)==0)
	    return true;
	    else
	    return false;

}
	    
};
