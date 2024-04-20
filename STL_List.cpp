#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> l;
	
	//insert element in list
	l.push_back(1);
	l.push_front(2);
	
	cout << "printing l " << endl;
	for(int i : l){
		cout << i << " ";
	}
	cout << endl;
	
	l.erase(l.begin());
	cout << "after erase list is " << endl;
	for(int i : l){
		cout << i << " ";
	}
	cout << endl;
	
	cout << "size of list is " << l.size() << endl;
	
	list<int> n(5, 100);
	cout << "printing n " << endl;
	for(int i : n){
		cout << i << " ";
	}
	cout << endl;
	
	
	
}