#include <iostream>

using namespace std;

int *fun(int A[], int N)
{

    cout << "ratio of size of array and size of int when size of arraay as pointer:";
    cout << sizeof(A) / sizeof(int) << endl; // here array is pointer so size of pointer is assigen as '8'..

    A[0] = 88;

    int *ap;
    ap = new int[N]; // reserve space in heap for return pointer array..

    cout << "make an array:";
    for (int i = 0; i < N; i++)
    {
        cin >> ap[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << ap[i] << endl;
    }

    return ap;
}

int main()
{

    int n;
    int a[5] = {11, 22, 33, 44, 55};

    cout << "ratio of size of array and size of int when size of actual arraay :";
    cout << sizeof(a) / sizeof(int) << endl;

    cout << "before the function array is: \n";
    for (int y : a)
    {

        cout << y << endl;
    }

    cout << "enter size of array which is for return by fun: ";
    cin >> n;
    int *b;
    b = fun(a, n);

    cout << "after the function array is: \n";

    for (int x : a)
    { // for each loop can't use for pointer array..

        cout << x << endl;
    }

    cout << "array by return parameter: \n";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }

    return 0;
}