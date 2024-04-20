#include <iostream>
using namespace std;

int main() {
	int p = 1;
	int s = 0;
	int n = 234;
	
while ( n!= 0){
int digit = n%10;
p = p*digit;
s = s+digit;

n=n/10;
	}
	
	cout << p << endl << s;
	
	
	
	
}