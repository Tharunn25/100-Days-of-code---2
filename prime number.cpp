#include <iostream>

using namespace std;

int main()
{
    int i,n;
    bool is_prime = true;
    
    cout<<"enter a number to find it's prime : ";
    cin>>n;
    
    if(n<2) is_prime = false;
    
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            is_prime = false;
            break;
        }
    }
    
    if(is_prime)
    {
        cout<<"The number given is prime number";
    }
    else
    {
        cout<<"The number given is not a prime number";
    }

    return 0;
}
