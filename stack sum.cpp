#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum =0;
    stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(40);
    stack.push(90);
    // stack.pop();
    // stack.pop();
    // now the stack is 10,20,40,90
    
    while(!stack.empty()){
        sum += stack.top();
        stack.pop();
    }
    cout<<sum<<" ";

    return 0;
}
