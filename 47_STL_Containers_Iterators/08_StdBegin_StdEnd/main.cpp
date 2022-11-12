/**
 * std::begin and std::end() template functions return the begin and 
 * end iterator respectively for underlying container passed as parameter
 * 
 * These functions are usually helpful when you want your iterator
 * based code to work even for regular raw c arrays. C arrays support
 * poiters and pointers meet all the requirements for a random access
 * iterators.
 * 
 * The requirements for the template argument is that the collection
 * passed in should support these begin and end iterators.
*/
#include <iostream>
using namespace std;
#include <vector>

int main(){
    
    /* code */
    //std::vector<int> v1 {1,2,3,4,5,6,7,8};
    int v1[] {1,2,3,4,5,6,7,8};

    std::cout << "Collection: ";
    
    // for(auto it = v1.begin(); it!=v1.end(); ++it){
    //     std::cout << *it << " ";
    // }
   
    for(auto it =std::begin(v1); it!=std::end(v1); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
} 