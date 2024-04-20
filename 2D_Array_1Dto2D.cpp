#include <iostream>

using namespace std;


int main(){
    int arr[4] = {1,2,3,4};

    int two[2][2];
    int i = 0;

     // take input --> row wise input
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            two[row][col] = arr[i];
            i++;
        }
    }

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << two[row][col] << " ";
        }
        cout << endl;
    }

}