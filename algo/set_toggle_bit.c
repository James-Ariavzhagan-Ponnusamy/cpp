#include <stdio.h> 
  
// Function to set the kth bit of n 
int setBit(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
} 
  
// Function to clear the kth bit of n 
int clearBit(int n, int k) 
{ 
    return (n & (~(1 << (k - 1)))); 
} 
  
// Function to toggle the kth bit of n 
int toggleBit(int n, int k) 
{ 
    return (n ^ (1 << (k - 1))); 
} 
  
// Driver code 
int main() 
{ 
    int n = 5, k = 1; 
  
    printf("%d with %d-th bit Set: %d\n", 
           n, k, setBit(n, k)); 
    printf("%d with %d-th bit Cleared: %d\n", 
           n, k, clearBit(n, k)); 
    printf("%d with %d-th bit Toggled: %d\n", 
           n, k, toggleBit(n, k)); 
    return 0; 
} 

/*
5 with 1-th bit Set: 5
5 with 1-th bit Cleared: 4
5 with 1-th bit Toggled: 4
*/
