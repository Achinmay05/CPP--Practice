#include <iostream>

using namespace std;

bool checkPallindrome(string str, int i, int j)
{
    // base case
    if (i > j) // if pointers crossed each other while comparing the letters of string then the given string is not a pallindrome

        return true;

    if (str[i] != str[j])
        return false;

    else
        // recursion call
        return checkPallindrome(str, i + 1, j - 1);
}

int main()
{
    string s = "abba";

    if (checkPallindrome(s, 0, s.length() - 1))
    {
        cout << "Given string is a Pallindrome " << endl;
    }

    else
        cout << "Not a Pallindrome !" << endl;
}