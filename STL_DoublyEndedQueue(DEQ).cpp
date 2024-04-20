#include <iostream>
#include <deque>
using namespace std;

int main(){
//insertion and deletion can be done from front as well as from back
	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);
	
	for(int i : d){
		cout << i << " ";
	}cout << endl;
	
//  d.pop_back();	
//	cout << "after poping from back" << endl;
//	for(int i : d){
//		cout << i << " ";
//	}
	
//	d.pop_front();
//	cout << "after poping from front" << endl;
//	for(int i : d){
//		cout << i << " ";
//	}cout << endl;
	
	cout << "print first index element is " << d.at(1) << endl;
	
	cout << "element at front is " << d.front() << endl;
	
	cout << "element at last is " << d.back() << endl;
	
	cout << "empty or not " << d.empty() << endl;
	
	cout << "size before erase is " << d.size() << endl;
	d.erase(d.begin(), d.begin() + 1);//it will delete element at front
	cout << "size after erase is " << d.size() << endl;	
} 