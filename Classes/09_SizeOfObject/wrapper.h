#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string_view>
using namespace std;

class Wrapper {
public:
    void do_something(){

    }
    void print_info(){
        cout << "var1: " << m_var1 << endl;
        cout << "var2: " << m_var2 << endl;
        cout << "name: " << m_name << endl;
    }
private:
    int m_var1 {};
    int m_var2 {};
    string m_name {"Lorem ipsum dolor sit amet ..."};
};

#endif