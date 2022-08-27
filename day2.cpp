// day 2 out of 100
// cpp program to reverse an array
#include <iostream>
using namespace std;

void reversearray(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] =  temp;
        start++; // we are actual swapping the start and end by increasing the start and decreasing the end by one
        end--;  
    }
}
void printarray(int arr[],int size){
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main() {
    
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The original array is:"<<endl;
    printarray(arr,n);
    reversearray(arr,0,n-1);
    cout<<"The array after reversing is :"<<endl;
    printarray(arr,n);
	return 0;
}



/* dry run 
1 2 3 4 5 6
6 2 3 4 5 1 (1 and 6 are swapped first)
6 5 3 4 2 1 (as the start increased by one and end decreased by one the next two elements are swapped)
6 5 4 3 2 1 (The same procudure contains till the start<end) */