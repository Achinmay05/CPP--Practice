#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "enter number of rows " << endl;
    cin >> row;

    int col;
    cout << "enter number of columns " << endl;
    cin >> col;

    // creating a 2D array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)

        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
    // creation done

    // taking input
    cout << "enter elements of array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}