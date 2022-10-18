#include <iostream>
#include <cstring>
using namespace std;

//function template
template <typename T> T maximum(T a, T b);

//template specialization
template <>
const char* maximum<const char*>(const char* a, const char * b);


int main(int argc, char **argv){
    
    /* code */
    int a{2};
    int b{3};
    double c {4.3};
    double d {6.75};
    string e{"hello"};
    string f{"world"};

    int max_int = maximum(a,b); //int type deduced
    int max_double=maximum(c,d);//double type deduced
    string max_str=maximum(e,f);//string type deduced

    const char* g{"wild"};
    const char* h{"animal"};

    cout << "max(const char*): " << maximum(g,h) << endl;
    return 0;
}

template <typename T> 
T maximum(T a, T b){
    return (a>b)?a:b;
}


template <> 
const char* maximum(const char* a, const char* b){
    return (strcmp(a,b)>0)?a:b;
}