#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &a, int s, int e) //the value of array is passed by reference otherwise
{                                        //the changes will not reflect in array of main function
    //create two pointer i and j for two halves
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    //compare the two pointer and store the small value in temporary vector
    while (i <= m && j <= e)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i++]); // temp.push_back(arr[i]); i++;
        }
        else
        {
            temp.push_back(a[j++]);
        }
    }
    //copy the leftover part of left half to the temp vector
    while (i <= m)
    {
        temp.push_back(a[i++]);
    }
    //copy the leftover part of right half to the temp vector
    while (j <= e)
    {
        temp.push_back(a[j++]);
    }
    //copy the temp vector to the main vector
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        a[idx] = temp[k++];
    }
    return;
}

void mergeSort(vector<int> &a, int s, int e) //the value of array is passed by reference otherwise
{                                            //the changes will not reflect in array of main function
    //base case
    if (s >= e)
    {
        return;
    }
    //recursion
    int mid = (s + e) / 2;
    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);
    return merge(a, s, e); //Either return the values of pass the value by reference
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);
    for (int p : arr)
    {
        cout << p << ",";
    }
    return 0;
}