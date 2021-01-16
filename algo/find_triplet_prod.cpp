#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

static void find_all_triplets(int arr[], int n) {
    std::unordered_set<int> s;
    s.insert(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int prod = arr[i] * arr[j];
            if (s.find(prod) != s.end())
            {
                printf("%d-%d-%d\n", arr[i], arr[j], prod);
            }
        }
    }
}

//int main_triplet_prod() {
int main() {
    int n = 6;
    int arr[6] = { 2,3,7,6,2,14 };
    std::cout << "\nThe triplets are \n";
    find_all_triplets(arr, n);
    return 0;
}

/*
    The triplets are
    2-3-6
    2-7-14
    3-2-6
    7-2-14
*/
