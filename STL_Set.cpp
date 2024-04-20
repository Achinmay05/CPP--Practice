#include <iostream>
#include <set>

using namespace std;

int main(){
//only unique elements are stored, 
//elements are returned in a sorted manner 
//slower than unordered set
//set is implemented using BST

	set<int> s;
	
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(6);
	s.insert(0);
	s.insert(6);
	
	cout << "printing set s" << endl;
	for(auto i : s){
		cout << i << " ";
	}cout << endl;
	
//	set<int> :: iterator it = s.begin();
//	it++; //it is the element which is an iterator initialized with begin value and incremented
//	s.erase(it);
//	
//	cout << "after erase " << endl;
//	for(auto i : s){
//		cout << i << endl;
//	}
//	cout << endl;
	
//	cout << "6 is present or not " << s.count(6) << endl;
	
	set<int> :: iterator itr = s.find(5);

    for(auto it = itr; it != s.end(); it++){
    	cout << *it << " ";
	}cout << endl;
	

	
}