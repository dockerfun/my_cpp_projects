#include <iostream>
using namespace std;

class A{
    public:
        A(A *v) { A::v = v; } // Error
        A() { A::v = 1.0; }
        float v;
        float set(float v) {
            A::v = v;
            return v;
        }
        float get(float v){
            return A::v;
        }
};

int main(){
    
    /* code */
    A a, *b = new A(a); // Error missing pointer

    cout << a->get(b->get(a->v));
    
    return 0;
}