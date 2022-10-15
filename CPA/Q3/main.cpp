#include <iostream>
using namespace std;

int main(){
    int t[4]={8,4,2,1};
    int *p1=t+2;
    int *p2=p1-1;
    p1++;
    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    cout << "p1-p2: "<< p1-p2 << endl;
    cout << "t[p1-p2]: "<< t[p1-p2] << endl;
    cout << *p1-t[p1-p2] << endl; //-1
    return 0;
}