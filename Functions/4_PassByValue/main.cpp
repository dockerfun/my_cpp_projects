#include <iostream>
using namespace std;

void say_age(int age);

int main(){

    int age {22};
    cout << "age - before: " << age << endl;
    say_age(age);
    cout << "age - after: " << age << endl;

    return 0;
}

void say_age(int age){
    ++age;
    cout << "You are " << age << " years old." << endl;
}