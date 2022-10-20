#include <iostream>
using namespace std;

int main(){

    //Memory leak: when we loose access to the memory that is dynamically allocated
    
    //Situation 1
    int *p_number {new int {65}};//points to some address -> address 1
    int number {33}; //lives at address 2

    p_number = &number;

    //Situation 2
    //double allocation
    /*int * p_number1 {new int  {54}};
    p_number1 = new int{22};

    //solution
    delete p_number1;
    p_number1 = nullptr;*/

    //Situation 3 - nested scope
    /*{
        int *p_number2 {new int {21}};

        //use the dynamic memory

        //solution
        //delete p_number2;
        //p_number2 = nullptr;
    }*/
    //Memory with int {21} is leaked.




    return 0;
}