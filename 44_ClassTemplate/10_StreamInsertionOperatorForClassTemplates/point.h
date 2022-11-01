#include <iostream>

//New assignment
template<typename T = int, unsigned int size = 10>
class Point{
T m_map[size];
public:
    void set_value(unsigned int index, T value){
        if(index>=size){
            std::cout << "Maximum capacity reached. Not adding item: " << value << std::endl;
            return;
        }
        m_map[index]=value;
    }
    T get_value(unsigned int index)const{
        return m_map[index];
    }
    void print_info(){
        std::cout << "size: " << std::endl;
        std::cout << "print : [ ";
        for(size_t i{0};i<size;++i){
            std::cout << m_map[i] << " ";
        } 
        std::cout << "]";
    }
};