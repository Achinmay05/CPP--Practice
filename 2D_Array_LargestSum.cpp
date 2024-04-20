#include <iostream>

using namespace std;

int largestRowsum(int arr[][4], int row, int col)
{

    int maxi = 0;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "the maximum Row sum is " << maxi << " " << "is at index " << rowIndex << endl;
    return rowIndex;
}

int largestColsum(int arr[][4], int row, int col)
{

    int maxi = 0;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    cout << "the maximum Column sum is " << maxi << endl;
}

void Print(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4];

    cout << "enter 12 elements" << endl;
     // take input --> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    Print(arr, 3, 4);

    largestRowsum(arr, 3, 4);
    largestColsum(arr, 3, 4);
}