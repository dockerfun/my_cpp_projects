#include <iostream>
#include <vector>

using namespace std;

class V
{
public:
    vector<int> vec;

    V(int a0 = 0, int a1 = 0)
    {
        vec.push_back(a0);
        vec.push_back(a1);
    }

    V operator>>(int arg)
    {
        V res(vec[0], vec[1]);

        for (int i = 0; i < 2; i++)
            res.vec[i] >>= arg;
        return res;
    }
};

int operator~(V &arg)
{
    int res = 1;

    for (int i = 0; i < 2; i++)
        res *= arg.vec[i];
    return res;
}

int main()
{
    V v(11, 6);
    v = v >> 1;

    cout << "(" << v.vec[0] << ", " << v.vec[1] << ")" << endl;
    cout << ~v << endl;

    int i = 10;
    do{
        cout << "ok" << endl;
    } while (i-->2);
       
}