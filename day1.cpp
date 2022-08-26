// day one out of 100
// cpp program for revising strings

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(){
    char str1[10]= "hello";
    char str2[10] = "cpp";
    char str3[100];
    int len;
    
    strcpy(str3,str1);
    cout<<"after using strcpy(str3,str1): "<<str3<<endl;
    
    len = strlen(str1);
    cout<<"the length of the str1 is : "<<len<<endl;
    
    strcat(str2,str1);
    cout<<"After concatenating the two strings: "<<str2<<endl;
    
    return 0;
}