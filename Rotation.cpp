
while(low<=high)
	    {
	        int mid = low+(high-low)/2;
	        if(arr[mid]<arr[mid+1]) low=mid+1;
	        else high=mid;
	    }
	    return low;
