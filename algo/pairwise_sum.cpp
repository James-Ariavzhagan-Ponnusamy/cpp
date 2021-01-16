#include <iostream>
using namespace std;

void findNumbers(int arr[], int n)
{
  int a_minus_c = arr[0] - arr[n-1];
  cout << "a-c " << a_minus_c << endl;
  int a = arr[1] + a_minus_c ;  
  cout << " a " << a << endl;
  a = a / 2 ;
  cout << endl<< endl;
  cout << a<< endl; 
  for(int i=0;i<n-1;i++)
  {
    cout <<arr[i] - a << endl;  
  }
}
int main() 
{ 
  int arr[] = {13,  10,  14,  9,   17,  21,  16,  18,  13,  17}; 
  //          {a+b, a+c, a+d, a+e, b+c, b+d, b+e, c+d, c+e, d+e}

 
  int n = 5; // n is not size of array, but number of 
               // elements whose pairwise sum is stored 
               // in arr[] 
  findNumbers(arr, n); 
  return 0; 
} 

/*
3
10
7
11
6
*/