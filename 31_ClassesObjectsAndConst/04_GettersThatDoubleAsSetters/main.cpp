#include <iostream>
using namespace std;
#include "dog.h"

int main(){
    
    /* code */
    /* declaring a const dog object */
    const Dog dog("Fluffy", "Shephard", 4);

    dog.print_info();
    cout << "name (original): " << dog.name() << endl;
    cout << "breed (original): " << dog.breed() << endl;
    cout << "age (original): " << dog.age() << endl;

    //if an object is not const: 
    Dog dog1("Milu", "Shephard", 4);
    dog1.print_info();
    cout << "name (original): " << dog1.name() << endl;
    cout << "breed (original): " << dog1.breed() << endl;
    cout << "age (original): " << dog1.age() << endl;

    dog1.name() = "Fluffy";
    dog1.breed() = "IDK";
    dog1.age() = 5;

    cout << "name (new): " << dog1.name() << endl;
    cout << "breed (new): " << dog1.breed() << endl;
    cout << "age (new): " << dog1.age() << endl;

    cout << "done" << endl;

    return 0;
}