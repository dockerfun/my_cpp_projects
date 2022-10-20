#include <iostream>
#include <string_view>

using namespace std;

#include "array.h"

int main(){

    //String_view parameters
    //std::string name {"Daniel"};
    //say_name("Daniel");
    say_name(std::string_view("Daniel"));

    string some_name("John");

    say_name(some_name);
    say_name(std::string_view("Samuel"));

    return 0;
}