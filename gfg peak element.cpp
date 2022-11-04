   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here 
       for(int i=0;i<n-1;i++){

        if(i==0){

            if(arr[i]>=arr[i+1]){

                return i;

            }

        }else if(i<n-1){

            if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){

                return i;

            }

        }

      }
    }
};
