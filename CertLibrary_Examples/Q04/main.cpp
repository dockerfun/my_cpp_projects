#include <iostream>
using namespace std;

int fun(int x) {
    return x<<2;
}

int main(){
    int i;
    i = fun(1) / 2;
    cout << i;
    return 0;
}