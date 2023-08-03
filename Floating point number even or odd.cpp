bool isEven(string s,int n)
{
    // code here.
    char ans;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] != '0' && s[i] != '.')
        {
            ans = s[i];
            break;
        }
    }
    int a (ans-'0');
    if(a%2==0) return true;
    else return false;
}
