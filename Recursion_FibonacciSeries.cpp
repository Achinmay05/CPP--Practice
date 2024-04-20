#include <iostream>

using namespace std;

int fS(int n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    } // base case

    if (n == 1)
    {
        cout << 1;
        return;
    } // base case

    fS(n - 1) + fS(n - 2);
    cout << n;
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    fS(n);
}