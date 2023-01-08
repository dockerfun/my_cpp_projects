#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s = "Abc", t = "A";
    s = s + t;
    t = t + s;

    int i = s.compare(t) > 0;
    int j = s.length() < t.length();

    cout << i + j << endl;

    return 0;
}
