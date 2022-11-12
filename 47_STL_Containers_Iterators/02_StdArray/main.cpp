#include <iostream>
using namespace std;
#include <array>
//#include <experimental/array>

template<typename T, size_t Size> // the second template argument has to be size
void print_array(const std::array<T, Size>& arr){
    std::cout << "array : { ";
    for (unsigned int i = 0; i < Size; i++)
    {
        /* code */
        std::cout << arr[i] << ", ";
    }
    std::cout << "}" << std::endl;
}

template<typename T>
void print_raw_array(const T* p, std::size_t size){
    std::cout << "data : { ";
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        std::cout << p[i] << ' ';
    }
    std::cout << '}' << std::endl;
}

int main(){
    
    /* code */
    std::array<int, 3> int_array1; //will contain junk by default
    std::array<int, 3> int_array2 {}; //will contain zeros
    std::array<int, 3> int_array3 { 1, 2, 3 }; // 1, 0, 0

    std::array int_array4{ 2, 5}; // type will be deduced by the compiler

    print_array(int_array1);
    // print_array(int_array2);
    // print_array(int_array3);
    // print_array(int_array4);

    //auto int_array5 = std::experimental::make_array(1,2,3,4,5);

    //std::array<int, 3> int_array6 { 1,2,3,4,5}; //Compiler error:
    //More than enought elements

    int_array1.fill(4);
    print_array(int_array1);

    print_raw_array(int_array1.data(), int_array1.size());
    print_raw_array(int_array3.end(), int_array1.size());
    

    return 0;
}