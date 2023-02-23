#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    // int r; -> variable
    // int *r; -> pointer
    // int &r; -> reference
    int &r = a;

    cout << a << endl
         << r << endl;

    return 0;
}