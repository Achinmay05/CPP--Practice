// two things are mandatory to achieve recursion one is base case (return mandatory) and second is recursive relation

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0) // base case
        return 1;

    return n * factorial(n - 1); // recurrence relation
}

int main()
{
    int n;
    cout << "enter the number " << endl;

    cin >> n;

    int answer = factorial(n);

    cout << "the factorial is " << answer << endl;
}