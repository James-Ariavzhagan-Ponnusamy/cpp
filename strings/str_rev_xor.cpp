#include <iostream>
using namespace std; 
  
// Function to reverse string and return revesed string 
string reversingString(string str, int start, int end) 
{ 
    // Iterate loop upto start not equal to end 
    while (start < end) 
    { 
        // XOR for swapping the variable 
        str[start] ^=  str[end]; 
        str[end]   ^=  str[start]; 
        str[start] ^=  str[end]; 
  
        ++start; 
        --end; 
    } 
    return str; 
} 
  
// Driver Code 
int main() 
{ 
    string s = "GeeksforGeeks"; 
    cout << reversingString(s, 0, 12)<<endl; 
    cout <<    reversingString ( reversingString(s, 0, 12), 0,12 )  <<endl; 

    return 0; 
} 

/*
skeeGrofskeeG
GeeksforGeeks
*/