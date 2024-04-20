//size of pointer in majority cases is 8 byte as it stores address

#include <iostream>

using namespace std;

int main(){
    int n = 5;

    int *ptr = &n; //ptr is a pointer which is pointing to int

    //another way to initialize the pointer
    // int *p = 0;
    // p = &n;

    // *ptr = (++*ptr); 
    cout << "address is " << ptr << endl;
    cout << "value is " << *ptr << endl;
    cout << "value is " << n << endl;

    double d = 5.5;
    double * ptr2 = &d;

    cout << "address is " << ptr2 << endl;
    cout << "value is " << *ptr2 << endl;
    cout << "value is " << d << endl; 
}