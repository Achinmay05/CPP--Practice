#include <iostream>

using namespace std;

bool isSorted(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1]) // this means array is not sorted
        return false;
        
    else
    {
        return isSorted(arr + 1, n - 1); // sending remaining array
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 25, -1};
    if (isSorted(arr, 5))
    {
        cout << "array is sorted " << endl;
    }

    else
        cout << "not sorted !" << endl;
}