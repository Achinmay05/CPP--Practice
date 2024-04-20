#include <iostream>

using namespace std;

// when passing a 2d array as a parameter in a function you need to specify number of columns
bool isPresent(int arr[][4], int key, int row, int col)
{
    for (int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
        if(arr[row][col] == key){
            return 1;
        }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    // creation of 2d arrays
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //this is row wise insertion

    // int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // i --> row
    // j --> column

    // take input --> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // // take input --> column wise input
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "enter the element to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "element found " << endl;
    }
    else
    {
        cout << "not found " << endl;
    }
}
