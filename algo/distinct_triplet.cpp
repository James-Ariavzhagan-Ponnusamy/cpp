#include <set>
#include <algorithm>
#include <iostream>

void print(int arr[], int n, int sum){
  std::sort (arr, arr + n);  
  int k=0;
  int low, high;

  for (int i = 0; i < n - 2; i++){
    k    =  sum - arr[i];  
    low  =  i + 1 ;
    high =  n - 1 ;
    while (low < high){
      if (arr[low] + arr[high] < k)
        low++;
      else if (arr[low] + arr[high] > k)
        high--;
      else{
        std::cout << "(" << arr[i] << " " << arr[low] << " " << arr[high] << ")\n";
        low++, high--;
      }
    }
  }
}

int main()
{
  int arr[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
  int sum = 6;
 
  int n = sizeof(arr) / sizeof(arr[0]);
 
  print(arr, n, sum);
 
  return 0;
}

/*
  (0 1 5)
  (0 2 4)
  (1 2 3)
*/