#include <iostream>
using namespace std;

int main(){
    
    /* code */
    /**
     * int - stores decimals
     * Typically occupies 4 bytes or more in memory
    */
    
    //variable braced initialization
    int elephant_count;

    int lion_count {}; //initialization to zero
    int cat_count{10}; //initialization to ten
    int dog_count{15}; //init to 15
    
    //use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    //won't compile, the expression in the braces uses undeclared variables
    //int bad_initalization {doesnt_exist1 + doesnt_exist2};

    //2.9 is of type double, with a wider rande than int
    //Error or Warning
    // int narrowing_conversion{2.9};

    // cout << "narrowing conversion: " << narrowing_conversion << endl;

    /**
     * Functional variable initialization
    */
   int apple_count(5);
   int orange_count(10);
   int fruit_count (apple_count + orange_count);

   //int bad_initialization (doesnt_exist3 + doesnt_exist4);

    //information lost. less safe than braced initializers
    int narrowing_conversion_functional(2.9);

    cout << "narrowing_conversion_functional: " << narrowing_conversion_functional << endl;
    
    return 0;
}