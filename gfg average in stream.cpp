//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> avg;
	    float sum =0;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	         avg.push_back(sum/(i+1));
	    }
	  return avg; 
	}
};
