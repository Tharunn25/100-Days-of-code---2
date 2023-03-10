// day 3 out of 100
// finding the maximum and minimum of an array

#include <iostream>
using namespace std;

int main()
{
    
    int n; 
    cout<<"Enter the number of elements in the array:"; // getting input for the number of elements in the array
    cin>>n;
    int arr[n];
    cout<<"Enter the array :"; // input for the whole array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,min;    // declaring two intergers max and min
    if(n==1){       // if number of elements in the array is one  
        max=arr[0];
        min=arr[0];
    }
    else{
        if(arr[1]>arr[0]){   // comparing the first two elements and making them as min and max
            max=arr[1];      // second element is greater than first so max is the second element
            min=arr[0];      // and the minimum is the first element
        }
        else{
            max=arr[0];      // if not the first case then
            min=arr[1];      // vice versa frist element is the max and second element is the minimum
        }
        for(int i=2;i<n;i++){   //since we are done with the first two elements now we are going to iterate from the second element to lst element
            if(arr[i]>max){     // if the iterated array is max then we are updating the max element
               max=arr[i];
                
                
            }
            if(arr[i]<min){    // if the iterated array is min then we are updating the min element
                min=arr[i];
            }
        }
    }
    
    
    cout<<"The maximum of the array is :"<<max<<endl;
    cout<<"The minimum of the array is :"<<min<<endl;
    return 0;
}
