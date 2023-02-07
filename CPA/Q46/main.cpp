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

    V& operator++()
    {
        for(int i = 0; i < 2; i++)
            vec[i]++;
        return *this;
    }
};

int main()
{
    V v1(1, 2);

    ++v1;
    cout << "(" << v1.vec[0] << ", " << v1.vec[1] << ")" << endl;
}