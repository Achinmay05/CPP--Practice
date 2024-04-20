#include <iostream>

using namespace std;

bool linearSearch(int *arr, int n, int key)
{
    if (n == 0)
    {
        return false;
    }

    if (arr[0] == key)
        return true;

    else
        return linearSearch(arr + 1, n - 1, key);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, -1};

    if (linearSearch(arr, 5, -1))
        cout << "Element Found " << endl;

    else
        cout << "Not Found !" << endl;
}