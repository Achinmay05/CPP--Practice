#include <iostream>

using namespace std;

void reachHome(int src, int dest)
{
    cout << src << " ";

    if (src == dest)
    {
        cout << " destination arrived " << endl;
        return;
    }

    reachHome(src + 1, dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
}