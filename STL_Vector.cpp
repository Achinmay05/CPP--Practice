#include <iostream>
#include <vector>
using namespace std;

int main(){
	//creating a Vector.
	
	vector<int> v;
	
	//capacity function is to know how much memory is allocated for elements.
	cout << "capacity is " << v.capacity() << endl;
	
	//to insert element in vector
	v.push_back(1);
	cout << "capacity is " << v.capacity() << endl;
	
	v.push_back(2);
	cout << "capacity is " << v.capacity() << endl;
	
	//to insert this element vector has increased its size to store it as vector didn't had memory.that's why the capacity became 4
	v.push_back(3);
	cout << "capacity is " << v.capacity() << endl;
	
	cout << "size is " << v.size() << endl;
	
	cout << "element at index 2 is " << v.at(2) << endl;
	
	cout << "element at first is " << v.front() << endl;
	
	cout << "element at last is " << v.back() << endl;
	
	cout << "before pop" << endl;
	for(int i : v){
		cout << i << " ";
	}cout << endl;
	
	v.pop_back(); //removing element
	
	cout << "after pop" << endl;
	for(int i : v){
		cout << i << " ";
	}cout << endl;
	
	//to empty vector, when we use clear function the size of the vector becomes 0 but capacity remains the same 
	v.clear();
	
	cout << "after clear capacity is " << v.capacity() << endl;
	
	cout << "after clear size is " << v.size() << endl;
	
	//if you know the size of the vector before creating it
	vector<int> a(5, 1);//this line means create a vector of size 5 and initialize all elements with 1
	cout << "printing a " << endl;
	for(int i : a){
		cout << i << " ";
	}cout << endl;
	
	//copying 'a' to a new vector.
	vector<int> copy(a);
	cout << "printing copy " << endl;
	for(int i : a){
		cout << i << " ";
	}cout << endl;
	
}