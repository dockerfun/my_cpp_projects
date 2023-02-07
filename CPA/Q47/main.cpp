#include <iostream>
#include <vector>

using namespace std;

class V {
public:
    vector<int> vec;
    
    V(int a0 = 0, int a1 = 0)
    { 
        vec.push_back(a0);
        vec.push_back(a1);
    }

    V operator++(int none)
    {
        V v(vec[0],vec[1]);
         cout << "(" << vec[0] << ", " << vec[1] << ")" << endl;

        for(int i = 0; i < 2; i++)
            ++vec[i];

        cout << "(" << v.vec[0] << ", " << v.vec[1] << ")" << endl;

        return v;
    }
};

int main()
{
    V v1(2, 3);

    //v1++;
    //cout << "(" << v1.vec[0] << ", " << v1.vec[1] << ")" << endl;
    int arr[10];

    //1[arr] = 1;
    0[arr] = 0;

    cout << 0[arr] << endl;
}