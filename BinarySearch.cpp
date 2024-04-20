#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int low = 0;
    int high = size -1;
    int mid = low + (high - low)/2;
    while (low <= high){
    if(arr[mid] == key){
        return mid;
    }

    if(key > arr[mid]){
        low = mid + 1;
    }

    else{
        high = mid - 1;
    }
    mid = low + (high - low)/2;
    }
    return -1;

}

int main(){
    int arr[5] = {1,2,3,4,5};

    int temp = binarySearch(arr, 5, 4);

    cout << temp << endl;
}