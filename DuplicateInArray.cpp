#include <iostream>
using namespace std;

int duplicate(int arr[], int size)
{
    int ans = 0;

    //XORing all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    
    //XOR [1, n-1]
    // for (int i = 1; i < size; i++)
    // {
    //     ans = ans ^ i;
    // }
    return ans;
}

void printArray (int arr[], int size ){
    cout << "printing the array" << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{
    int arr[3] = {1,1,1};
 int sol =  duplicate(arr, 3);
 cout<<sol<<endl;

    
}