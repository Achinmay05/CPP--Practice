#include <iostream>
using namespace std;

// void revArray(int arr[], int size){
//     for(int i=size; i>=0; i--){
//         cout << arr[i] << " ";
//     }
// }

void swap (int arr[], int size){
    int start = -1;
    int end = size;
    int temp;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end --; 
    }
}

void printArray (int arr[], int size ){
    cout << "printing the array" << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    swap(arr,5);
    printArray(arr, 5);


}