#include <iostream>
using namespace std;
#include <vector>
#include <array>

int main(){
    
    /* code */
    std::vector<int> numbers{1,2,3,4,5,6,7,8,9};
   
    std::vector<int>::reverse_iterator it = numbers.rbegin();
    
    std::cout << "Numbers:  [";
    while(it!=numbers.rend()){
        std::cout << " " << *it++;
    } 
    std::cout << " ]" << std::endl;

    /* Can't compare iterators of different types */
    auto int_rev=numbers.rbegin();

    // if(it_rev!=numbers.end()){ // Compiler error
    //     std::cout << "Do something.." << std::endl;
    // }

    

    return 0;
} 