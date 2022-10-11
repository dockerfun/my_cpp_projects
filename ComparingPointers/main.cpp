#include <iostream>
using namespace std;

int main(){

    int array[8] {1,2,3,4,5,6,7,8};

    int * p1 {array};
    int * p2 {&array[6]}; //7

    //Comparing pointers
    cout << "Comparing pointers: " << boolalpha << endl;
    cout << "p1 > p2: " << (p1 > p2) << endl;
    cout << "p1 < p2: " << (p1 < p2) << endl;
    cout << "p1 >= p2: " << (p1 >= p2) << endl;
    cout << "p1 <= p2: " << (p1 <= p2) << endl;
    cout << "p1 == p2: " << (p1 == p2) << endl;
    cout << "p1 != p2: " << (p1 != p2) << endl;
    return 0;
}