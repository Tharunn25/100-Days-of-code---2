#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> stack;
    
    stack.push(10);
    stack.push(45);
    stack.push(90);
    stack.push(32);
    stack.push(54);
    
    stack.pop();
    stack.pop();
    
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }

    return 0;
}
