// cpp program to print the string in reverse
// day 4 out of 100
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reversestr(string str){
    for(int i = str.length();i>=0;i--){  // running the for loop in reverse
        cout<<str[i];                   // printing it
    }
}

int main()
{
    string s = "Tharunn"; // creating  a string
    reversestr(s);   // calling the function
    return 0;
    
    
}
