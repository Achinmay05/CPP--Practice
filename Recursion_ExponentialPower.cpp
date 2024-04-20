#include <iostream>

using namespace std;

int power(int n)
{
    if (n == 0) // base case
        return 1;

    return 2 * power(n - 1); // recurrence relation
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;

    cin >> n;

    int answer = power(n);

    cout << "answer is " << answer << endl;
}