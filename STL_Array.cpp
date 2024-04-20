#include <iostream>
#include <array>
using namespace std;

int main(){
int basic[3] = {1,2,3};
//STL Array's implementation is done by basic array declared above
array<int,4> a = {1,2,3,4}; //this is a static array

int size = a.size();

for(int i=0; i<size; i++){
    cout << a[i] << endl;
}

cout << "element at index 2 is " << a.at(2) << endl;

cout << "empty or not " << a.empty() << endl;

cout << "first element is " << a.front() << endl;

cout << "last element is " << a.back() << endl;
}