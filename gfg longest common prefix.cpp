
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
         string x = arr[0];

        for(int i=1;i<N;i++){

            while(arr[i].find(x)){

                x.pop_back();

            }

        }

      
        return (x == "")?"-1":x;
    }
};
