#include <iostream>
#include <vector>

using namespace std;

void merge(int a[], int m, int b[], int n){
	
	int i = 0;
	
	for(int j = 0; j<m; j++){
		if(a[j] == 0 ){
			swap(a[j], b[i]);
			i++;
		}
	}
	
	for(int k = 0; k<m; k++){
		if(a[k] > a[k+1]){
			swap(a[k], a[k+1]);
		}
	}
}

void print (int arr[], int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	
	int a[6] = {1,2,3,0,0,0};
	int b[3] = {2,5,6};

	
	merge(a, 6, b, 3);
	print(a, 6);
}