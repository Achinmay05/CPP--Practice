#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) 
{
    int temp;
    for (int i = 1; i <= n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (int i = 0; i <= n-1; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {5, 4, 7, 8, 10};
    bubbleSort(arr, 5);
}