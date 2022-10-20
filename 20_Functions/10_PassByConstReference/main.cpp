#include <iostream>
using namespace std;

//declaration
void say_age(const int& ref_age);

//assignment - two functions
int contains_character(const char* str, unsigned int size, char c){
    int result {-1};
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        if (str[i]==c) result=i;
    }
    return result;
}

void find_character(const char* str, unsigned int size, char c)
{
    int position = contains_character(str, size, c);
    if(position!=-1){
        cout << "Found character " << c << " at index " << position << endl;
    }else{
        cout << "Could not find the character " << c << " in " << str;
    }
}

int main(){

    int age {22};
    cout << "age - before: " << age << endl;
    say_age(age);
    cout << "age - after: " << age << endl;

    cout << endl;

    //assignment
    char message[] {"Hello there"};
    find_character(message, sizeof(message), 'o');
    find_character(message, sizeof(message), 'P');

    return 0;
}

void say_age(const int& ref_age){
    //ref_age = 23;//Error
    //++(*p_age);//Changing value at address in p_age: Error
    cout << "p_age - in : " << &ref_age << endl;
    cout << "You are " << ref_age << " years old." << endl;
}
