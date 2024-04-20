#include <iostream>

using namespace std;

int main()
{ /*
    int arr[10] = {1, 4, 5};

    // cout << arr << endl;
    // cout << *arr << endl;
    // cout << arr + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << (*arr) + 1 << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }

    //another way
    for (int i = 0; i < 3; i++)
    {
        cout << i[arr] << " ";
    }


int temp[10];
cout << sizeof(temp) << endl;

int *ptr = &temp[0];
cout << sizeof(ptr) << endl;

cout << sizeof(*ptr) << endl;

cout << sizeof(&ptr) << endl;
*/

int a[20] = {1,2,3,5};
cout << &a[0] << endl;
cout << &a << endl;
cout << a << endl;

int *p = &a[0];
cout << p << endl;
cout << *p << endl;
cout << &p << endl;
}
