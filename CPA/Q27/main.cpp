#include <iostream>

using namespace std;

class A {
friend class B;
friend class C;
private:
	int value;
protected:
	void print() 
    { 
        cout << "value is: " << value << endl; 
    }
};

class C {
public:
	void do_it(A &a)
    { 
        a.print(); 
    }
};

class B {
public:
	void do_it(A &a, C &c)
    { 
        a.value = 77; 
        c.do_it(a); 
    }
};

int main()
{
    /* code */
	A a; B b; C c;
	b.do_it(a,c);
}