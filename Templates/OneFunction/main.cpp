#include <iostream>
using namespace std;

//One function works for all data types
template <typename T> T myMax(T x, T y)
{
    return (x>y) ? x : y;
}

int main()
{
    cout << myMax<int>(3, 7) << endl;
    cout << myMax<char>('z', 't') << endl;
    cout << myMax<float>(3.3, 7.4) << endl;
    
    return 0;
}