#include <iostream>
using namespace std;

int main(){

    //Dynamic arrays
    //Arrays allocated on the heap with the new operator.
    //Can also use the std::nothrow version of new
    size_t size{30};

    //Different ways to declare an array
    double * p_salaries {new double[size]}; //array contains garbage values
    int * p_students {new(nothrow) int[size]{}};//all values initialized to 0
    double *p_scores{new(nothrow) double[size]{1,2,3,4,5}};//allocating memory
    //space for an array of size double vars. First 5 will be initialized with
    //1,2,3,4,5 and the rest will be 0's.

    if(p_scores)
    {
        cout << "size of scores : " << sizeof(p_scores) << endl;
        for (size_t i{}; i < size; ++i)
        {
            /* code */
            cout << "value : " << p_scores[i] << " : " << *(p_scores+i) << endl;
        }
    }

    //releasing memory 
    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;

    cout << "----------------------" << endl;
    //static array vs. dynamic array
    int scores[10] {1,2,3,4,5,6,7,8,9,10};
    cout << "scores size (stack) : " << std::size(scores) << endl;
    for(auto s : scores){
        cout << "value : " << s << endl;
    }

    //on the heap -> dynamic array
    int * p_scores1 = new int[10]{1,2,3,4,5,6,7,8,9,10};
   
/* Limitations:
    -- no std::size
    //cout << "p_scores1 size: " << std::size(p_scores1) << endl;
    -- no ranges available
    for(auto s : p_scores1){
        cout << "value : " << s << endl;
    }
*/
    //because it is only a pointer to an array!

    return 0;
}