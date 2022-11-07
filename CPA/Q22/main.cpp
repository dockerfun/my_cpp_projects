#include <iostream> 
using namespace std; 

enum e { 
    a=1,b,c,d 
}; 

e& operator--(e &x) { 
    x = b; 
    return x; 
} 

int main(void) {
    e f = c; 
    e g = d;
    //cout << int(f--) << endl; // Error
    cout << f << endl;
    cout << g << endl;
    return 0; 
}