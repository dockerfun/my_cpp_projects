#include <iostream>
using namespace std;

class A
{
public:
    A(float v)
    {
        cout << v << endl;
        A::v = v;
    }
    // A(A& a){
    // }
    float v;
    float set(float v)
    {
        A::v = v;
        return v;
    }
    float get(float v)
    {
        return A::v;
    }
};

int main()
{
    /* code */
    A *a = new A(1.0), *b = new A(*a);
    cout << a->get(b->set(a->v));
    return 0;
}