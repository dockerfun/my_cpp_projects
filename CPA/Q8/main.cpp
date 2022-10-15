#include <iostream>
using namespace std;

int main(void) {
	string s = "Abc", t = "A";
	s = s + t; //AbcA
	t = t + s; //AAbcA
	cout << "s.compare(t): " << s.compare(t) << endl;
	int i = s.compare(t) > 0;
	int j = s.length() < t.length();
	cout << i + j << endl; //2
	return 0;
}