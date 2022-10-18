#include <iostream>
#include <cstring>
using namespace std;

//function template
//3
template <typename T> 
T maximum(T a, T b){
    cout << endl;
    cout << "Template overload for T" << endl;
    cout << endl;
    return (a>b)?a:b;
}

//1
const char* maximum(const char* a, const char * b){
    cout << endl;
    cout << "Method call for const char*" << endl;
    cout << endl;
    return (strcmp(a,b)>0)?a:b;
}

//2
template <typename T>
T* maximum(T* a, T* b){
    cout << endl;
    cout << "Template overload called for T*" << endl;
    cout << endl;
    return (*a > *b)?a:b;
}


int main(int argc, char **argv){
    
    /* code */
    const char * g { "wild" };
    const char * h { "animal" };

    //1,2 or 3?
    //cout << "max(const char*): " << maximum(g,h) << endl;

    //another example with type int
    /**
     * Which method serves maximum first?
    */
    int a{10};
    int b{65};

    auto result = maximum(&a,&b);
    cout << "max: " << *result << endl;


    return 0;
}