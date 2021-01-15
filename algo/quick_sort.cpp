#include <iostream>
#include <algorithm>
using namespace std;

static void print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
static int pivot(int arr[], int l, int h)
{
	int x = arr[h];
	int i = 0;
	for (int j = 0; j < h; j++)
	{
		if (arr[j] <= x) 
		{
			std::swap(arr[i], arr[j]);
			i++;
		}
	}
	std::swap(arr[i], arr[h]);
	return i;
}

static void j_quick_sort(int arr[], int l, int h)
{
	if (l >= h) return;
	int p = 0;
	p = pivot(arr, l, h);
	j_quick_sort(arr, l,   p-1);
	j_quick_sort(arr, p+1, h);
	
}
int main()
{
	int arr[] = { 12,3,5,26,4,19,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	j_quick_sort(arr, 0, n-1);
	print_array(arr, n);
	return 0;
}

//3 4 5 7 12 19 26