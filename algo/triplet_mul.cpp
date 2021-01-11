#include <bits/stdc++.h>

void find_all_triplets(int arr[], int n){
  std::sort(arr, arr + n);
  std::set<int> s;
  s.insert(arr, arr+n);

  for (int i = 0; i<n-1; i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int prod = arr[i] * arr[j] ;
      if ( s.find(prod) != s.end())
      {
        printf("%d-%d-%d\n", arr[i], arr[j], prod);
      }
    } 
  }
}

int main(){
  int n=6;
  int arr[n] = {2,3,7,6,8,9};
  std::cout << "\nThe triplets are \n";
  find_all_triplets(arr, n);
  return 0;
}

/*
  The triplets are
  2-3-6
*/