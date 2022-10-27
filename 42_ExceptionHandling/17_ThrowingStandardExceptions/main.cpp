/**
 * Exception
 * 
 * - logic_error: 
 *      - invalid_argument
 *      - length_error
 *      - out_of_range
 * 
 * - runtime_error:
 *      - overflow_error
 *      - underflow_error
 * 
 * - others
 *      - bad_alloc
 *      - bad_cast
*/
#include <iostream>
using namespace std;

class Students{
public:
    Students()=default;
    Students(std::string_view s1, std::string_view s2, std::string_view s3, std::string_view s4, std::string_view s5){
        m_students[0]=s1;
        m_students[1]=s2;
        m_students[2]=s3;
        m_students[3]=s4;
        m_students[4]=s5;  
    }
    ~Students()=default;
    std::string_view get_student(size_t index){
        const std::string message = "Index out of range, valid range[" + std::to_string(0) + "," + std::to_string(4) + "]";
        if((index<0) || (index>=5))
            throw std::out_of_range(message);
        return m_students[index];
    }
private:
    std::string m_students[5];//allocated on the stack, no need for deletion
};

int main(){
    
    /* code */
    Students students("John Snow", "Terry Boomd", "Nicholai Itchenko", "Bilom Atunde", "Lily Park");

    try{
        std::cout << students.get_student(2) << std::endl;
        std::cout<< students.get_student(5) <<std::endl;
    }
    catch(std::exception& ex){
        std::cout << "Something is wrong: " << ex.what() << std::endl; //out of range exception
    }

    std::cout << "End" << std::endl;
    return 0;
}