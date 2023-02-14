#include <iostream>
using namespace std;

//https://www.geeksforgeeks.org/print-all-possible-consecutive-numbers-with-sum-n/
void DispSum(int N)
{
    int nStart, nEnd;
    int i, j;
    int sum = 0;
    nStart = 0;
    nEnd = (N + 1) / 2;

    while (nStart < nEnd) {
        sum = 0;
        for (i = nStart; i < nEnd; i++) {
            sum += i;
            if (sum == N) {
                for (j = nStart; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            if (sum > N) break;
        }
        nStart++;
    }
    cout << endl << endl;
}

int main() {
    DispSum(100);
    DispSum(125);
    return 0;
}

/*
    100 => 
    9 10 11 12 13 14 15 16
    18 19 20 21 22

    125 => 
    8 9 10 11 12 13 14 15 16 17
    23 24 25 26 27
def function_name(p1):
    # function body 
    print("Contineous sum for", p1)
    nBegin = 0;
    nEnd = (p1+1)//2
    while(nBegin<nEnd):
        sum =0
        for i in range(nBegin, nEnd,1):
            sum += i
            if ( sum == p1):
                for j in range(nBegin, i+1, 1):
                    print(j)
        nBegin=nBegin+1
    return

function_name(100)
function_name(125)

*/
