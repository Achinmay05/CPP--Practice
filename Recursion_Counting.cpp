#include <iostream>

using namespace std;

int count(int n)
{
    if (n == 0) // base condition
        return 1;

    count(n - 1); // recurrence relation

    cout << n << " "; // processing
}

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;

    cout << "printing counting" << endl;
    count(n);
}