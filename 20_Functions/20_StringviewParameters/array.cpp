#include <iostream>
#include <string_view>

using namespace std;

//String_view Parameters
//1. original argument list leads to an error
// void say_name(std::string & name){
//     cout << "Name is: " << name << endl;
// }

//const argument list avoid us having compiler error
// void say_name(const std::string & name){
//     cout << "Name is: " << name << endl;
// }

//proper solution is to introduce std::string_view parameter type
void say_name(std::string_view sv){
    cout << "Name is: " << sv << endl;
}