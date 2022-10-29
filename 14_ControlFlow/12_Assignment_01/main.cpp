#include <iostream>
using namespace std;

int main(){
    
    /* code */
    int value{0};
    cout << "Please type in an integral value :" << endl;
    cin >> value;
    cout << value << " is " << (((value%2)==0)?"even":"odd") << endl;
    
    return 0;
}