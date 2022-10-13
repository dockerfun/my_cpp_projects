#include <iostream>
using namespace std;

//declaration
void say_age(int& ref_age);

int main(){

    int age {22};
    cout << "age - before: " << age << endl;
    say_age(age);
    cout << "age - after: " << age << endl;

    return 0;
}

void say_age(int& ref_age){
    ref_age = 23;
    //++(*p_age);//Changing value at address in p_age: Error
    cout << "p_age - in : " << &ref_age << endl;
    cout << "You are " << ref_age << " years old." << endl;

    //p_age = &dog_count; //Error
}