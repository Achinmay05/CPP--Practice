#include <iostream>

using namespace std;

int say(int n, string arr[])
{
    // base condition
    if (n == 0)
        return 0;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    say(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "enter the number " << endl;
    cin >> n;

    say(n, arr);
}