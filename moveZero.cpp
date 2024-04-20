#include<iostream>

using namespace std;

void moveZero(int arr[], int n){
	for(int i = 0; i!=n; i++){
		if(arr[i]==0 && arr[i+1]!=0){
			swap(arr[i], arr[i+1]);
		}
		else {
			
		}
		
	}
}

void print(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int arr[5] = {1,0,2,0,8};
	
	moveZero(arr, 5);
	
	print(arr, 5);
	
	
}