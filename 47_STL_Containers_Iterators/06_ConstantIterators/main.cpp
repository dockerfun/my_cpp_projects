#include <iostream>
using namespace std;
#include <vector>

template<typename T>
void print_collection(const T& collection){
    auto begin_it = collection.begin();
    std::cout << "[";
    while(begin_it!=collection.end()){
        std::cout << " " << *begin_it++;
    }
    std::cout << " ]" << std::endl;
}

int main(){
    
    /* code */
    std::vector<int> numbers {1,2,3,4,5,6,7,8,9};
    auto it = numbers.begin();

    while(it!=numbers.end()){
        *it = (*it)*2;
        ++it;
    }

    print_collection(numbers);

    std::cout << "--------- const -----------" << std::endl;

    auto it_c = numbers.cbegin(); // Const iterator

    while(it_c!=numbers.end()){
        //*it_c = (*it_c)*2; //Can't change underlying data via a const iterator
        ++it_c;
    }

    print_collection(numbers);

    std::cout << "--------- const reverse iterator -----------" << std::endl;

    auto it_r = numbers.crbegin(); // Const reverse iterator

    while(it_r!=numbers.rend()){
        //*it_r = (*it_r)*2; //Can't change underlying data via a const iterator
        ++it_r;
    }

    print_collection(numbers);

    // Const iterators from const containers
    // Const container
    const std::vector<int> numbers2 { 1,2,3,4,5,6 };

    auto it_modify = numbers2.begin();
    std::cout << *it_modify << std::endl;

    //Because the container is const, begin() here returns a const iterator

    *it_modify = 4; //compiler error
    

    return 0;
} 