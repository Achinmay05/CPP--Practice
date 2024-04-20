#include <iostream>

using namespace std;

bool binSearch(int *arr, int s, int e, int key)
{
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
        return binSearch(arr, mid + 1, e, key);

    else
        return binSearch(arr, s, mid - 1, key);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    if (binSearch(arr, 0, 4, 5))
        cout << "element found " << endl;

    else
        cout << "Not Found !" << endl;
}