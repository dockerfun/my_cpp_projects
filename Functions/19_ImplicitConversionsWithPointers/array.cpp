#include <iostream>
using namespace std;

//Implicit conversion with pointers
void print_sum(int *param1, int *param2){
    cout << "sum: " << (*param1 + *param2) << endl;
}
