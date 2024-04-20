#include <iostream>

using namespace std;

int main(){
    char ch[6] = "abcde";
    // cout << ch << endl; // prints entire string

    // char *c = &ch[0];
    // cout << c << endl;
    // cout << *c << endl;
    // cout << &c << endl;

    char *c = "abcde";
    cout << c << endl;
    cout << *c << endl;// *c is pointing to a i.e first element of the array, this is a very dangerous (not recommended way)
}