#include <iostream>
#include <string>

int main (){
    std::string country;
    std::cout << "Where do you live?" << std::endl;
    std::cin >> country;
    std::cout << "I've had heard great things about " + country + ". I'd like to go sometime." << std::endl;
    return 0;
}