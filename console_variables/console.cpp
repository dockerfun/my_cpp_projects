// Demo for variables
//

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int i = 1;
	cout << i << endl;

	int j;
	j = 2;

	cout << "j=" << j << endl;

	int k;

	cout << "Enter a number: " << endl;
	cin >> k;

	cout << "The number is: " << k << endl;

	int v(2); //initializes v to 2
	cout << "v(2): " << v << endl;

	int y{ 5 };
	cout << "y:" << y << endl;

	//double
	double d = 2.2;
	double d2 = i;
	int l = d;

	cout << "d=" << d << endl;
	cout << "d2=" << d2 << endl;
	cout << "l=" << l << endl;

	char c1 = 'a';
	cout << "c1=" << c1 <<endl;

	bool isTrue = false;

    cout << "isTrue=" << isTrue << endl;

	isTrue = i;
	cout << "isTrue=" << isTrue << endl;

	isTrue = d;
	cout << "isTrue=" << isTrue << endl;

	//deduce the types
	auto var1 = 9;
	auto var2 = 2.2;
	auto var3 = 2L;
	auto var4 = true;
	auto var5 = 0xFF;
	auto var6 = 1'000'000'000'000;
	auto var7 = 0b101;
	auto var8 = 'c';
	auto var9 = "c";


	return 0;
}