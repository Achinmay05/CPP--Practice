#include <iostream>

using namespace std;

int Sum(int *arr, int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];

    int remainingPart = Sum(arr + 1, n - 1);
    int answer = arr[0] + remainingPart;
    return answer;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int ans = Sum(arr, 5);

    cout << "sum is " << ans << endl;
}