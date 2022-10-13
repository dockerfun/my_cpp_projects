#include <iostream>
using namespace std;

//declaration
void say_age(const int* age);

int main(){

    int age {22};
    cout << "age - before: " << age << endl;
    say_age(&age);
    cout << "age - after: " << age << endl;

    return 0;
}

void say_age(const int* p_age){
    ++(*p_age);//Changing value at address in p_age: Error
    cout << "You are " << *p_age << " years old." << endl;
}