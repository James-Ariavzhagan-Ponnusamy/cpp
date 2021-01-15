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
	int i = l;
	for (int j = l; j < h; j++)
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

static int j_get_element(int arr[], int l, int h, int k)
{
	if (k > 0 && k <= h - l + 1)
	{
		int p = 0;
		p = pivot(arr, l, h);
		if (p - l == k - 1) return arr[p];
		if (p - l > k - 1) 
			return j_get_element(arr, l, p - 1, k);
		
		return j_get_element(arr, p + 1, h, k+l-p-1);
	}
	return -1;
}
int main()
{
	int arr[] = { 12,3,5,26,4,19,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int p = j_get_element(arr, 0, n - 1,5);
	print_array(arr, n);
	cout << endl << p << endl;
	return 0;
}

/*
3 5 4 7 12 19 26

12
*/
