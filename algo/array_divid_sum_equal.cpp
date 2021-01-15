#include <iostream>
using namespace std;

void printArray(int arr[], int n, int mid) 
{

    for (int i = 0; i < n; i++)
    {
        if (i == mid) cout << endl;
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printTwoParts_2(int arr[], int n)
{
    int sl = 0, sr = 0;
    int i;
    for (i = 0; i < n; i++) sl += arr[i];

    for(i = n-1; i >= 0; i--)
    {
        sr += arr[i];
        sl -= arr[i];
        if (sl == sr) {
            printArray(arr, n, i );
            break;
        }
    }
}

void printTwoParts_1(int arr[], int n)
{
    int sl=0, sr=0;

    for (int i = 0; i < n; i++)
    {
        sl += arr[i];
        sr = 0;
        for (int j = i + 1; j < n; j++)
        {
            sr += arr[j];
        }
        if (sl == sr) {
            printArray (arr, n, i+1);
            break;
        }
    }
}

int main() {
    int arr[] = { 1 , 2 , 3 , 4 , 5 , 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoParts_1(arr, n);
    printTwoParts_2(arr, n);
    return 0;
}


/*
* 
* Set 1 output
    1 2 3 4
    5 5

* Set 2 output
    1 2 3 4
    5 5
*/

