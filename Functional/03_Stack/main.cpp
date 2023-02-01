#include <iostream>
#include <functional>
using namespace std;

int stack[100];
int SP = 0;

std::function<int(int)> push = [](int x) { return stack[SP++]=x; };
std::function<int()> pop = []() { return stack[--SP]; };

int main(){
    
    /* code */
    push(2);
    push(4);
    push(1);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    
    return 0;
}