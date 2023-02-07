#include <iostream>
using namespace std;

enum e { a=1, b, c, d };

e& operator++(e &x){
    x=a;
    return x;
}

int main(void){
    e f = c;
    cout << int(f--) << endl;
    return 0;
}