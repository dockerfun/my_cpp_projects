#include <iostream>
using namespace std;
#include <vector>
#include <array>

template<typename T>
void print_collection(const T& collection, size_t begin_adjustment,
    size_t end_adjustment){

    //Adjust begin and end
    auto start_point = collection.begin()+begin_adjustment;
    auto end_point = collection.end()-end_adjustment;

    std::cout << "[";
    while(start_point!=end_point){
        std::cout << " " << *start_point;
        ++start_point;
    }
    std::cout << " ]" << std::endl;
}

int main(){
    
    /* code */
    std::vector<int> ints1{11,22,33,44,55,66,77,88,99,100};
    std::array<int,9> ints2 {100,200,300,400,500,600,700,800,900};

    print_collection(ints1, 2, 2);
    std::cout << std::endl;
    print_collection(ints2, 3, 3);
    

    return 0;
} 