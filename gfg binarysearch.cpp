
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l=0;
        int h=n-1;
        int m=0;
        while(l<=h){
        
        m = h+l/2;
        
        if(arr[m]==k){
            return m;
        }
        
        else if(arr[m]>k){
            h = m-1;
        }
        else{
            l=m+1;
        }
        
        }   
        return -1;
    }
};
