#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int, string> m;
//  key   | values	
	m[1] = "chinmay";
	m[13] = "ghidorah";
	m[2] = "godzilla";
	
// another way to insert
    m.insert({5, "Rhodan"
	});
	
	cout << "printing set before erase " << endl;
	for (auto i : m){
		cout << i.first << " " << i.second << endl;
	}
	
	cout << "finding 13 --> " << m.count(13) << endl;
	
//	m.erase(m.begin());
	m.erase(13);
	
	cout << "printing set after erase " << endl;
	for (auto i : m){
		cout << i.first << " " << i.second << endl;
	}
//find returns iterator of that particular element 
	
	auto it = m.find(5);
	
	for(auto i = it; i != m.end(); i++){
		cout << (*i).first << endl;
	} 	
//agar 5 ke baad koi aur element bhi hota to vo print ho jaata.
}