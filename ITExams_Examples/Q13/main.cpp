#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <iostream>

using namespace std;

int main() {
    int t[] = { 10, 5, 9, 6, 2, 4, 7, 8, 3, 1 };

    vector<int> v1(t, t + 10);
    deque<int> d1(t, t + 10);
    set<int> s1(t, t + 10);

    cout<<find(v1.begin(), v1.end(), 6)<<" "<<find(d1.begin(), d1.end(), 6)<<""<<find(s1.begin(), s1.end(), 6);

    return 0;
}