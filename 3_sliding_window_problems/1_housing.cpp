/* Along one side of a road there is a sequence of vacant plots of land.
Each plot has a different area(non-zero), So, the areas form a sequence
A[1], A[2],....., A[N].

You want to buy K acres of land to build a house. You want to find all
segments of continguous plots(i.e, a subsection in the sequence) of whose
sum is exactly K.

INPUT 
Plots = [1 3 2 1 4 1 3 2 1 1 2]
K = 8

OUTPUT
2 5
4 6
5 9 */

#include <iostream>

using namespace std;

void housing(int *arr, int n, int k)
{
    int i = 0;
    int j = 0;
    int cs = 0;

    while (j < n)
    {
        cs += arr[j++];
        while (cs > k && i < j)
        {
            cs = cs - arr[i++];
        }
        if (cs == k)
        {
            cout << i << " - " << j - 1 << endl;
        }
    }

    return;
}

int main()
{
    int plots[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
    int n = sizeof(plots) / sizeof(int);
    int k = 8;
    housing(plots, n, k);

    return 0;
}