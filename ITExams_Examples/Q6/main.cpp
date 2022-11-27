#include <list>
#include <iostream>
using namespace std;

template<class T>
void print(T start, T end) {
    while (start != end) {
        std::cout << *start << " "; start++;
    }
}
int main()
{
    int t1[] ={ 1, 7, 8, 4, 5 };
    list<int> l1(t1, t1 + 5);
    
    int t2[] ={ 3, 2, 6, 9, 0 };
    list<int> l2(t2, t2 + 5);
    
    l1.sort();
    
    list<int>::iterator it = l2.begin();
    it++; 
    it++;
    
    l1.splice(l1.end(),l2, it, l2.end());
    
    print(l1.begin(), l1.end()); 
    cout<<"Size:"<<l1.size()<<" "; 
    
    print(l2.begin(), l2.end()); 
    cout<<"Size:"<<l2.size()<<endl; 
    
    return 0;
}