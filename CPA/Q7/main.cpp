#include <iostream>
using namespace std;

int main(void) {
	int *t[2] = { new int[2], new int[2] };
	for(int i = 0; i < 4; i++)
	{
		cout << "t[" << i % 2 << "][" << i / 2 << "]=" << i << endl;
		t[i % 2][i / 2] = i;
	}

	/*
		t[0][0]=0
		t[1][0]=1
		t[0][1]=2
		t[1][1]=3
	*/
	
	cout << t[0][1] + t[1][0] << endl; //2 + 1 = 3
	
	delete [] t[0];
	delete [] t[1];
	
	return 0;
}