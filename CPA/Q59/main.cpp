#include <iostream>
using namespace std;

class Uno
{
protected:
    char y;

public:
    char z;
};

//class Due : public Uno
//class Due: protected Uno
class Due : private Uno
{
    public :
        void set(){
            y = 'a';
z = 'z';
}
void out() { cout << ++y << --z; }
}
;
int main()
{

    /* code */
    Due b;
    b.set();
    b.out();

    return 0;
}