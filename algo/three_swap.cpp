#include <iostream> 
using namespace std; 
  
// Assign c's value to a, a's value to b and 
// b's value to c. 
void swapThree(int &a, int &b, int &c) 
{ 
    // Store XOR of all in a 
    a = a ^ b ^ c; 
  
    // After this, b has value of a 
    b = a ^ b ^ c; 
  
    // After this, c has value of b 
    c = a ^ b ^ c; 
  
    // After this, a has value of c 
    a = a ^ b ^ c; 
} 
  
// Driver code 
int main() 
{ 
//    int a = 10, b = 20, c = 30; 

    int a = 10, b = 20, c = 20; 
  
    cout << "Before swapping a = " << a << ", b = "
         << b << ", c = " << c << endl; 
  
    swapThree(a, b, c); 
  
    cout << "After swapping a = " << a << ", b = "
         << b << ", c = " << c << endl; 
  
    return 0; 
} 

/*
D:\james\cpp\algo>a
Before swapping a = 0, b = 20, c = 30
After swapping a = 30, b = 0, c = 20

D:\james\cpp\algo>g++ three_swap.cpp

D:\james\cpp\algo>a
Before swapping a = 20, b = 20, c = 30
After swapping a = 30, b = 20, c = 20

D:\james\cpp\algo>g++ three_swap.cpp

D:\james\cpp\algo>a
Before swapping a = 10, b = 10, c = 30
After swapping a = 30, b = 10, c = 10

D:\james\cpp\algo>g++ three_swap.cpp

D:\james\cpp\algo>a
Before swapping a = 10, b = 20, c = 20
After swapping a = 20, b = 10, c = 20


*/