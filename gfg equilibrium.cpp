    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        int pos=-1;
        int ls=0;
        int rs=0;
        
        for(int i=0;i<n;i++){
            rs+=arr[i];
        }
        
        for(int i=0;i<n;i++){
            rs-=arr[i];
            if(ls==rs){
                pos = i+1;
                break;
            }
            else{
                ls+=arr[i];
            }
        }
        return pos;
    }

};
