#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size";
    cin >> n;

    int A[n];
    A[0]=2;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << endl;
    // }

    // foreach
    for (int x : A)
    {
        cout << x << endl;
    }

    // cout << sizeof(A) << endl;
    // cout << A[1] << endl;
    return 0;
}