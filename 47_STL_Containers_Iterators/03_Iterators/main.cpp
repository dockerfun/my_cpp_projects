#include <iostream>
using namespace std;
#include <vector>
#include <array>

template<typename T>
void print_collection(const T& collection){
    auto it = collection.begin();
    std::cout << "[";
    while(it!=collection.end()){
        std::cout << " " << *it++;
    }
    std::cout << " ]" << std::endl;
}

int main(){
    
    /* code */
    std::vector<int> ints1{11,22,33,44};
    std::vector<int>::iterator it = ints1.begin();
    std::vector<int>::iterator end_it = ints1.end(); //points to past the last element

    // std::cout << std::boolalpha;
    // std::cout << "first elt: " << *it << std::endl;
    // std::cout << "it = end_it: " << (it == end_it) << std::endl;

    // ++it;
    // std::cout << std::endl;
    // std::cout << "second elt: " << *it << std::endl;
    // std::cout << "it = end_it: " << (it==end_it) << std::endl;

    // ++it;
    // ++it;
    // std::cout << std::endl;
    // std::cout << "last elt: " << *it << std::endl;
    // std::cout << "it = end_it: " << (it==end_it) << std::endl;

    // ++it;
    // std::cout << std::endl;
    // std::cout << "after the last elt: " << *it << std::endl;
    // std::cout << "it = end_it: " << (it==end_it) << std::endl;

    //print_collection(ints1);

    std::vector<int> int_v1 {1,2,3,4};
    std::array<int,4> int_array1 {100,200,300,400};

    print_collection(int_v1);
    print_collection(int_array1);
    
    return 0;
} 