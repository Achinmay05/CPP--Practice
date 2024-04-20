#include <iostream>
using namespace std;

long long int sqRoot(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == n)
            return mid;

        if (sq < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int tempsol = sqRoot(n);
    cout << " answer is " << morePrecision(n, 3, tempsol) << endl;
}