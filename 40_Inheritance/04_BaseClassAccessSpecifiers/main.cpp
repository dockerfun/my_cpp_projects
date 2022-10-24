#include <iostream>
using namespace std;
//#include "person.h"
#include "engineer.h"
//#include "civileng.h"
//#include "player.h"
//#include "nurse.h"

int main(){
    
    /* code */
    //Nurse nurse1;
    //std::cout << nurse1 << std::endl;
    
    Engineer eng;
    std::cout << eng << std::endl;

    //eng.set_first_name("Joseph"); // Error : 'Person' is not accessible base of 'Engineer'

    return 0;
}