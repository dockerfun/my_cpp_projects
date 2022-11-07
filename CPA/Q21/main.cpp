 #include <iostream> 
using namespace std;

class A { 
    public: 
        int v; 
        A():v(1) {} 
        A(int i):v(i) {} 
        //void operator**(int a) { v *= a; } // Error
}; 
        
int main(){
    
    /* code */
    A i = 2; 
    //i ** 2; 
    cout << i.v << endl;
    return 0;
}