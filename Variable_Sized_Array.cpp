#include <iostream>

using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int x = 5;
    // cout << "size of int is " << sizeof(x) << endl;
    // to allocate memory in heap
    // new int; // it returns address

    // to store this address
    // int *n = &x;
    // cout << "size of int* is " << sizeof(n) << endl;

    // to create array in heap memory
    // creating variable sized array in heap
    int n;
    cout << "enter the size of array " << endl;
    cin >> n;
    int *arr = new int[n];

    // taking input in an array
    cout << "enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // arr[i] is equivalent to *(arr + i)
    }

    int ans = getSum(arr, n);

    cout << "answer is " << ans << endl;

    // to free up dynamic memory we use delete keyword

    // for array deletion
    delete[] arr;

    // for single element deletion
    // delete n;
}