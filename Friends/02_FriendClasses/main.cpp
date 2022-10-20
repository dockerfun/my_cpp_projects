/**
 * Friend classes
*/

#include <iostream>
using namespace std;

class Dog{
friend class Cat;
string m_name;
int m_age;
public:
    Dog(const string & dog_name, int dog_age)
    : m_name{dog_name}, m_age{dog_age} {

    }
    
};

class Cat {
    string m_name;
public:
    Cat()=default;
    Cat(string  & cat_name)
        : m_name{cat_name}{//Initializer list 
    }
    void show_info_about_dog(const Dog & dog) const{
        cout << "dog name: " << dog.m_name << endl;
    }
};

int main(){
    
    /*
     * Friend functions
     */

    Cat cat;
    Dog dog("Fluffy", 2);
    
    cat.show_info_about_dog(dog);

    return 0;
}