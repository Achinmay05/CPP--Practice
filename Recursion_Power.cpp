#include <iostream>

using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // Recursive Call
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }

    //if b is odd
    {
        return a * ans * ans;
    }
}

int main()
{
    int a = 2;
    int b = 3;
    int ans = power(a, b);
    cout << "answer is " << ans << endl;
}