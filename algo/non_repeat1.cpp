// C++ proogram for above approach
#include <iostream>

using namespace std;

static void showbits(unsigned char b)
{
    unsigned char c = 128;
    cout << (int)b << " : bits ";
    for (int i = 1; i <= 8; i++)
    {
        //cout << (int)c << " : " << (int)b << endl;
        if (c & b)
            printf("%d ", 1);
        else
            printf("%d ", 0);
        c = c >> 1;
    }
    cout << endl;
}


/* This function sets the values of
*x and *y to non-repeating elements
in an array arr[] of size n*/
static void get2NonRepeatingNos(int arr[], int n,
    int* x, int* y)
{
    /* Will hold Xor of all elements */
    int Xor = arr[0];

    /* Will have only single set bit of Xor */
    int set_bit_no;
    int i;
    *x = 0;
    *y = 0;

    /* Get the Xor of all elements */
    for (i = 1; i < n; i++)
        Xor ^= arr[i];

    showbits(Xor);
 
    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = Xor & ~(Xor - 1);

    /* Now divide elements in two sets by
    comparing rightmost set bit of Xor with bit
    at same position in each element. */
    for (i = 0; i < n; i++)
    {

        /*Xor of first set */
        if (arr[i] & set_bit_no)
            *x = *x ^ arr[i];
        /*Xor of second set*/
        else
        {
            *y = *y ^ arr[i];
        }
    }
}

/* Driver code */
int main()
{
    int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
    int n = sizeof(arr) / sizeof(*arr);
    int* x = new int[(sizeof(int))];
    int* y = new int[(sizeof(int))];
    get2NonRepeatingNos(arr, n, x, y);
    cout << "The non-repeating elements are " << *x << " and " << *y;
}

// This code is contributed by rathbhupendra

/*
**
14 : bits 0 0 0 0 1 1 1 0
The non-repeating elements are 7 and 9

*/