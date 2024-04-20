#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element){
        for(int i=0; i<size; i++){
            if(arr[i]==element){
                return 1;
            }
        }
        return 0;

        
}
int main(){
    int e;
    cout << "enter the element to search"<< endl;

    cin >>e; 
int arr[5] = {1,2,3,4,5};

 int a = linearSearch(arr,5,e);
 

 if(a){
    cout << "element found" << endl;
 }

 else {
    cout << "not found" << endl;
 }
}