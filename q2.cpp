#include <iostream>
using namespace std;

int main(){
	int count = 0;
	unsigned int n = 00000000000011101; 
	while(n!=0){
		//checking the last bit
		 if(n&1){
		 	count++;
		 }
		 n=n>>1;
	}
	cout << count;
}