#include <iostream>
using namespace std;

namespace alpha {int var=1;}
namespace beta {int var = alpha::var+1;}

int main(void) {
	beta::var += alpha::var;
	{
		using namespace beta;
		cout << var << endl; //3
	}
	return 0;
}