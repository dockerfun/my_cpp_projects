#include <iostream>
using namespace std;
//#include "person.h"
//#include "engineer.h"
//#include "civileng.h"
#include "player.h"

int main(){
    
    /* code */

    Player player1("Basketball", "Teszt", "Elek");
    std::cout << player1 << std::endl;

    player1.set_first_name("Muhi");
    player1.set_last_name("Maga");

    std::cout << player1 << std::endl;

    std::string s1{"Valaki"};
    std::string s2{"Valami"};

    Person person1(s1, s2);
    std::cout << person1 << std::endl;

    
    return 0;
}