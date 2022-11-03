  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
            }
            while(arr[i]==arr[i+1]){
                i++;
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
    }
};
