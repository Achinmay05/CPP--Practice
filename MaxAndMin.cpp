#include <iostream>
using namespace std;

void printArray (int arr[], int n){
    cout << "printing the array" << endl;
        for(int i=0; i<3; i++){
            cout << arr[i];
        }
        cout << endl;
}

void update(int arr[], int n){
    arr[2]=5;
}

int main(){
    int a[10] = {1, 2, 3};
    cout << "array before update"<< endl;
    printArray(a,10);
    update(a,10);
    cout << "array after update" << endl;
    printArray(a,10);
    
}