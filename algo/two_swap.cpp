#include <iostream>
using namespace std;
void swap(int* xp, int* yp)
{
    // Check if the two addresses are same
    if (xp == yp)
        return;
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}
 
// Driver Code
int main()
{
    int x = 10; int y=0;
    swap(&x, &x);
    cout << "After swap(&x, &x): x = " << x << endl;
    x = -2 , y=-3;
    swap(&x, &y);
    cout << "After swap(&x, &x): x = " << x <<" : y = " << y << endl;
    x = -2 , y=0;
    swap(&x, &y);
    cout << "After swap(&x, &x): x = " << x <<" : y = " << y << endl;

    return 0;
}

/*
After swap(&x, &x): x = 10
After swap(&x, &x): x = -3 : y = -2
After swap(&x, &x): x = 0 : y = -2
*/