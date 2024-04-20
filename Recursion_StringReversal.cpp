#include <iostream>

using namespace std;

void revString(string &s, int i, int j)
{
    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;

    revString(s, i, j);
}

int main()
{
    string a = "abcde";

    revString(a, 0, a.length() - 1);

    cout << a << endl;
}