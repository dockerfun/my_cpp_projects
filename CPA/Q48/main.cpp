#include <iostream>

using namespace std;

class P {
public:
    int no;
    P(int n) : no(n) { }
    P() : no(0) { }
    string operator&()
    {
        string res = "";
        switch(no) {
            case 0: res = "teszt 0";
            case 1: res = "teszt 1";
            case 2: res = "teszt 2";
        }
        return res;
    }
};

P& operator*(string s)
{
    P *p;
    if(!s.compare("teszt 0"))
        p = new P(0);
    else if(!s.compare("teszt 1"))
        p = new P(1);
    else if(!s.compare("teszt 2"))
        p = new P(2);
    else
        p = new P(-1);
    return *p;
}

int main()
{
    P p1(2);

    string s = &p1;
    P p2 = *s;
    cout << "'" << s << "' -> " << p2.no << endl;
}