#include <iostream>
using namespace std;

//prototype
//blueprint for a max funtion
template <typename T> T maximum(T a, T b);

int main(int argc, char **argv){
    
    /* code */
    int a{10};
    int b{23};
    double c{4.3};
    double d{6.75};
    string e {"Hello"};
    string f{"HelloWorld"};
    maximum(a, b); 
    maximum(c, d);
    maximum(e,f);
    
    /**
     * explicitly says that we want the double version
     * if an instance (template instance) is not there already, 
     * it will be created
    */
    cout << "max: " << maximum<double>(c,d) << endl;

    /**
     * works, even if parameters are of different types, there is 
     * implicit conversion from int to double for the first parameter
    */
    cout << "max: " << maximum<double>(a,c) << endl;//explicit template argument
    //maximum(a, c); // error

   /**
    * Error: cannot converst string to double
   */
  //maximum<double>(a,e);

    return 0;
}

template <typename T> 
T maximum(T a, T b){
    return (a>b)?a:b;
}