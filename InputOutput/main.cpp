#include <iostream>
using namespace std;


int main(int argc, char **argv){
    
    int value{2};
    cout << "value is: " << value << endl;

    cerr << "Error" << endl;
    clog << "Log" << endl;

    return 0;
}