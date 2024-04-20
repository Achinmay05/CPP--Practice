#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<string> q;
	
	q.push("Chinmay");
	q.push("Monster Zero");
	q.push("Ghidorah");
	
	cout << "first element is " << q.front() << endl;
	
	cout << "size before pop is " << q.size() << endl;
	
	q.pop();
	
	cout << "first element after pop is " << q.front() << endl;
	
	cout << "last element is " << q.back() << endl;
	
	cout << "size after pop is " << q.size() << endl;
	
}