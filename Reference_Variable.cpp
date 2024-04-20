#include <iostream>

using namespace std;

void update2(int &n)
{ // pass by reference
    n++;
}

void update1(int n)
{ // pass by value
    n++;
}

int main()
{
    int n = 5;
    int &j = n;

    // creating a reference variable
    //  int &j = n;

    // cout << n << endl;
    // n++;
    // cout << j << endl;
    // j++;
    // cout << n << endl;
    // cout << j << endl;
    cout << "before update --> " << n << endl;
    update2(j);
    cout << "after update --> " << n << endl;
}