#include <iostream>
using namespace std;
#include <vector>



int firstOcc(vector<int>& arr, int size, int key)
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


int lastOcc(vector<int>& arr, int size, int key)
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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}