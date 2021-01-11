#include <bits/stdc++.h>

void find_all_triplets(int arr[], int n, int sum){
  std::sort(arr, arr + n);

  for (int i = 0; i<n-1; i++)
  {
    int l=i+1;
    int r=n-1;
    int x=arr[i]; // fix the first element and search the remaining 
    while (l < r) {
     if (x + arr[l] + arr[r] == sum)
     {
       printf("%d %d %d\n", x, arr[l], arr[r]);
       l++;
       r--;
     }
     else if (x + arr[l] + arr[r] < sum)
      l++;
     else
      r--;
    }
  }
}

int main(){
  int n=6, sum=16;
  //cout << "\nEnter the number of elements : ";
  //cin >> n;
  int arr[n] = {2,3,7,6,8,9};
  //cout << "\nInput the array elements : ";
  //for(int i = 0; i < n; i++){
  //  cin >> arr[i];
  //}
  //cout << "\nEnter the sum value : ";
  //cin >> sum;
  std::cout << "\nThe triplets are \n";
  find_all_triplets(arr, n, sum);
  return 0;
}