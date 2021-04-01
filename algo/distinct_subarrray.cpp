#include <iostream>
#include <vector>
#include <map>
using namespace std;
//https://www.geeksforgeeks.org/subarraysubstring-vs-subsequence-and-programs-to-generate-them/
int CheckDistinct(vector<int> x) {
    map<int, int> m;
    int i = 0;
    int data = 0;
    for (i = 0; i < x.size(); i++) {
        data = x[i];
        m[data] = 1;
    }
    //cout <<"Size of unique elements " << m.size()<<endl;
    return m.size();
}

void subArray(vector<int> v)
{
    int nT = 0;
    int n = 0;
    n = v.size();
    nT = CheckDistinct(v);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> x;
            int distinct = 0;
            for (int k = i; k <= j; k++)
            {
                //cout << v[k] << " ";
                x.push_back(v[k]);
            }
            distinct = CheckDistinct(x);
            if (distinct == nT)
            {
                cout << distinct << " : ";
                for (int k = i; k <= j; k++)
                {
                    cout << v[k] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main() {

    vector<int> v;
   /* v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    */

    
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(6);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
  
  /*
  v.push_back(1);
  v.push_back(2);
  v.push_back(2);
  v.push_back(1);
  v.push_back(1);
  */
    subArray(v);
    return 0;
}


/*

/*  C++ code to generate all possible subsequences.
    Time Complexity O(n * 2^n) */
#include<bits/stdc++.h>
using namespace std;
 
void printSubsequences(int arr[], int n)
{
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n);
 
    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
 
*/
