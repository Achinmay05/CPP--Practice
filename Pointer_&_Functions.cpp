#include <iostream>

using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
	*p = *p + 1;
}

int getSum(int arr[], int n){
	cout << endl << "size is " << sizeof(arr) << endl;
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	/*
    int n = 5;
    int *p = &n;
//    print(p);
    cout << "before update --> " << p << endl;
    update(p);
    cout << "after update --> " << p << endl;
    return 0;*/
    
    int arr[6] = {1,2,3,4,5,8};
    
    cout << "Sum is " << getSum(arr+3, 3) << endl; //passing specific part of array as a parameter to getSum(). 
}