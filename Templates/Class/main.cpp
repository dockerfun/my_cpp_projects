#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>

using namespace std;

class Person
{
    string name;
    int id;
public:
    Person(const string& name, const int& id){
        this->name = name;
        this->id = id;
    };

    string getDetails() {
        return to_string(this->id) + " ; " + string(name);
    }
};

int main()
{
    Person p1("Hakan Sukur", 12);

    cout << p1.getDetails() << endl;
    return 0;
}