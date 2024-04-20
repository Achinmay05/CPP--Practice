#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; //as we should check at left side
        }

        else if (key < arr[mid])// go left
        {
            e = mid - 1;
        }

        else if (key > arr[mid])// go right
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}


int lastOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid - 1; // as we should check at right side
        }

        else if (key < arr[mid])// go left
        {
            e = mid - 1;
        }

        else if (key > arr[mid])// go right
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 3, 2, 2, 4};

   int temp = firstOcc(arr, 5, 2);

   cout << temp;
}