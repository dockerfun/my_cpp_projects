/***
 * Integral types lesss than 4 bytes in size don't support arithmetic operations.
*/

#include <iostream>
using namespace std;

int main(){
    
    /* code */
    //char      // 1 byte in size
    //short int // 2 bytes in size
    
    short int i{4};
    short int g{5};

    cout << "size of i: " << sizeof(i) << endl;
    cout << "size of g: " << sizeof(g) << endl;

    auto e = i + g;

    cout << "sizeof(e): " << sizeof(e) << endl;

    // char
    char h{4};
    char v{5};

    cout << "size of h: " << sizeof(h) << endl;
    cout << "size of v: " << sizeof(v) << endl;

    auto d = h + v;

    cout << "sizeof(d): " << sizeof(d) << endl;



    return 0;
}