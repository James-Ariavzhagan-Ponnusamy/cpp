#include <iostream>
using namespace std;

static void fill_matrix(int arr[5][5], 
	int starting_row, int ending_row, 
	int starting_column, int ending_column, int v)
{
	for (int i = starting_row; i <= ending_row; i++)
	{
		for (int j = starting_column; j <= ending_column; j++)
		{
			arr[i][j] = v;
		}
	}
}

int main()
{
	int sr = 0;
	int er = 4;
	int sc = 0;
	int ec = 4;
	int v = 3;
	int arr[5][5];
	memset(arr, 0, sizeof(arr));
	while (sr <= er && sc <= ec)
	{
		fill_matrix(arr, sr, er, sc, ec, v);
		v--;
		sr++;
		sc++;
		er--;
		ec--;
	}
	cout << "print matrix " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
	cout << "print matrix " << endl;
	return 0;
}

/*

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

*/