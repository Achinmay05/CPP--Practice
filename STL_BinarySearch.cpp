#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> v;
	
	v.push_back(1);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(21);
	
	cout << binary_search(v.begin(), v.end(), 5) << endl;
	
    cout << "lower bound --> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound --> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    
    int a = 5;
    int b = 10;
    
    cout << "maximum element is " << max(a, b) << endl;
    cout << "minimum element is " << min(a, b) << endl;
    
    swap(a, b);
    cout << " after swapping a is " << a << " b is " << b << endl;
    
    string s = "abcde";
    reverse(s.begin(), s.end());
    cout << "string after reversal --> " << s << endl;
    
    cout << "before rotation " << endl;
    for(auto i : v){
    	cout << i << " ";
	}cout << endl;
    
    rotate(v.begin(), v.begin() + 1, v.end());
    
    cout << "after rotation " << endl;
    for(auto i : v){
    	cout << i << " ";
	}cout << endl;
	
	//intro sort works behind the scenes of sort function
	sort(v.begin(), v.end());
	cout << "after sorting" << endl;
	for(auto i : v){
    	cout << i << " ";
	}cout << endl;
}