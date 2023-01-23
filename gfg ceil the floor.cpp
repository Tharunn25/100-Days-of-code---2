int floor(int arr[],int n,int x)
{
    int ans = -1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]<=x)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(ans!=-1) return arr[ans];
    else return -1;
};

int ceil(int arr[],int n,int x)
{
    int ans = -1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(ans!=-1) return arr[ans];
    else return -1;
};

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int,int>result;
    sort(arr,arr+n);
    result.first=floor(arr,n,x);
    result.second=ceil(arr,n,x);
    return result;
}




