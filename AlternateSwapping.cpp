#include <iostream>
using namespace std;

void printArray (int arr[], int size ){
    cout << "printing the array" << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
}

void swapAlternate(int arr[], int size){
        for(int i=0; i<size; i+=2){
            if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
}
        }

int main(){
    int arr[5] = {1,2,3,4,5};
    swapAlternate(arr, 5);
    printArray(arr, 5);
}