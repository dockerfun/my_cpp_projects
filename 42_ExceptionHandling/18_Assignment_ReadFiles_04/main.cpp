#include <iostream>
#include <string_view>
#include <fstream>
#include <sstream>

void read_file(const std::string& filename, size_t size, int *data){
    std::ifstream fstream_in{filename.data()};//we may fail to open the file

    //we fail to open the file
    if(fstream_in.fail()){
        // We failed to open the file: throw an exception
        //throw std::runtime_error(filename.data());
        std::stringstream ss;
        ss << "Unable to open file " << filename;
        throw std::runtime_error{ss.str().c_str()};
    }
    int value;
    int index{};
    while(fstream_in >> value){
        data[index++] = value;
    }

    // something might go wrong in the process of reading the file
    if(!fstream_in.eof()){
        std::cout << "Could not reach the end of the file" << std::endl;
        throw std::runtime_error("Couldn't read the file");
    }
}

int main(){
    
    /* code */
    int data[4]{};
    
    // Call a function with a filename doesn't exist
    const std::string& filename = {"numberss.txt"};
    try{
        read_file(filename, std::size(data), data);
        for(auto i : data){
            std::cout << "value: " << i << std::endl;
        }
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl; 
    }
    return 0;
}