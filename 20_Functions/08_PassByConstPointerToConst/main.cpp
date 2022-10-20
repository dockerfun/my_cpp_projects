#include <iostream>
using namespace std;

int dog_count {2};

//declaration
void say_age(const int* const p_age);

void do_stuff(int *a, int *b){
    (*a)++;
}

int main(){

    int age {22};
    cout << "age - before: " << age << endl;
    say_age(&age);
    cout << "age - after: " << age << endl;

//assignment
    // int x{3};
    // int y{4};
    // do_stuff(&x, &y);
    // cout << x << endl;

    return 0;
}

void say_age(const int* const p_age){
    //++(*p_age);//Changing value at address in p_age: Error
    cout << "p_age - in : " << p_age << endl;
    cout << "You are " << *p_age << " years old." << endl;

    //p_age = &dog_count; //Error
}