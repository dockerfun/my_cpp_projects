#include <iostream>
using namespace std;
//#include "person.h"
//#include "engineer.h"
//#include "civileng.h"
#include "player.h"

int main(){
    
    /* code */

    Player player1("Basketball");
    std::cout << player1 << std::endl;

    player1.set_first_name("Muhi");
    player1.set_last_name("Maga");

    std::cout << player1 << std::endl;
    
    return 0;
}