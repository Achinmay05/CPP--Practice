//steps of conversion
// divide the number by 2
// store remainder
// repeat above 2 steps until remainder becomes 0
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int ans = 0;
	int i = 0;
	
	while (n != 0){
		int bit = n & 1;
		ans = (bit * pow(10, i)) + ans;
		
		n = n >> 1;
		i++;
	}
	cout << ans << endl;
}