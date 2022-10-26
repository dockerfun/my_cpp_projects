#include <iostream>
#include <string>
#include <thread>

void our_terminate_function(){
    std::cout << "Custom terminate function called" << std::endl;
    std::cout << "Program will terminate in 10s ..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    std::abort();
}

int main()
{
    /* code */
    //throw 1; //we can control how the program behave if there is an exception

    /**
     * C++ wired this way: 
     *  - if an exception is not handled anywhere in the app,
     *    the function std::terminate() located in <exception> will be called
     * 
     *  - std::terminate will in turn call std::abort() located in <cstdlib> to
     *    actually kill the program
    */

    std::set_terminate(&our_terminate_function);

    /* with lambda function */
    // std::set_terminate([](){
    //     std::cout << "Custom terminate function called" << std::endl;
    //     std::cout << "Program will terminate in 10s ..." << std::endl;
    //     std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    //     std::abort();
    // });

    throw 1;

    return 0;
}