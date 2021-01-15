
#include <iostream>
using namespace std;

void search(int arr[4][4], int v)
{
    int i = 0, j = 3;
    while (i < 4 & j >= 0)
    {
        if (arr[i][j] == v)
        {
            cout << "The data found at " << i << ":" << j << endl;
            return;
        }
        if (arr[i][j] > v) // decrement cols
            j--;
        else
            i++; // increment rows
    }
}
int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    search(mat, 29);

    return 0;
}
/*
The data found at 2:1
*/