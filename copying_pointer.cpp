#include <iostream>

using namespace std;

int main(){
    int n  = 5;
    int *p = &n;

    //copying a pointer
    int *q = p;
    cout << p << " " << q << endl;
    cout << *p << " " << *q << endl;
}