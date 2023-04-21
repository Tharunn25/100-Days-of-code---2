// kadane's algorithm - to find the maximum of the subarray
#include <iostream>

using namespace std;


void maxarr(int arr[],int n){
    // we are declaring two terms here maximum sum and current sum
    int maxsum=0;
    int cursum=0;

    for(int i=0;i<n;i++){           // iterating the array
        cursum = cursum + arr[i];   // current sum = current sum + arr[i]
        if(cursum>maxsum){          // after iteration if cursum > max sum , we are making current sum as the maxsum
            maxsum = cursum;
        }
        if(cursum<0){
            cursum=0;               // if current sum is less than 0 we are not getting any value from that part so we are making it as
                                    // zero
        } 
    }
    cout<<maxsum;
    return;
}

int main()
{
    int n;
    cout<<"Enter the number of elements present in the array : ";
    cin>>n;
    int arr[n] = {};
    cout<<"enter the elements present in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // getting the input for the array

    maxarr(arr,n); // calling the function with arr and n as arguments

    return 0;
    
    
}

/* dry run 
[ 5 -4 -2 6 -1]

first iteration max sum and current sum both are 5
second interation 5 + (-4) =  1 (so it is less than the max sum, no updation)
third interation   1 + (-2) = -1 (so it is less than 0, so cursum now will be 0)
fourth iteration   0 +  (6) =  6 (so it is greater than the cursum, so the maxsum will be updated now to 6)
fifth iteration    6 + (-1) = 5 (so it is less than the max sum)

so we will print 6
