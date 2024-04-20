#include <iostream>

using namespace std;

bool binarySearch(int arr[][2], int row, int col, int target){
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            if(arr[row][col] == target){
                return 1;
            }
        }
        
    }
    return 0;
}

void Print(int arr[][2], int row, int col)
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}


int main(){

    int arr[2][2] = {{1,4},{2,5}};


     // take input --> row wise input
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    Print(arr, 2, 2);

    cout << endl;

    if(binarySearch(arr, 2, 2, 3)){
        cout << "element found ";
        cout << endl;
    }

    else{
        cout << "not found !";
    }
    
    

}