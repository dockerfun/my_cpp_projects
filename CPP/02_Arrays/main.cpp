#include <iostream>
#include "array.h"
using namespace std;

int main()
{

    /* code */
    Array A(10);

    for (unsigned i = 0; i < A.getSize(); ++i)
    {
        A[i] = i;
    }

    for (unsigned i = 0; i < A.getSize(); ++i)
    {
        cout << "A[" << i << "]: " << A[i] << endl;
    }

    cout << "size: " << A.getSize() << endl;
    A.add(100);

    cout << "new size: " << A.getSize() << endl;

    A.delItem(A.getSize()-1);
    cout << "size after deletion: " << A.getSize() << endl;

    return 0;
}
