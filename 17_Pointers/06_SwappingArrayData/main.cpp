#include <iostream>
using namespace std;


int main(){

    int arr0[] {1,2,3,4,5};
    int arr1[] {6,7,8,9,10};
    
    cout << "arr0: " << endl;
    for (size_t i{}; i<size(arr0); ++i) {
        cout << arr0[i] << " ";
    }
    cout << endl;

    cout << "arr1: " << endl;
    for(size_t i{}; i<size(arr1); ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //with pointers - added later
    int *p_arr0 {arr0};
    int *p_arr1 {arr1};
    int *tmp {nullptr};

    cout << "arr0: " << endl;
    for (size_t i{}; i<size(arr0); ++i) {
        cout << *(p_arr0+i) << " ";
    }
    cout << endl;

    cout << "arr1: " << endl;
    for(size_t i{}; i<size(arr1); ++i) {
        cout << *(p_arr1+i) << " ";
    }
    cout << endl;

/*
    //swapping arrays
    int *p_arr0 {arr0};
    int *p_arr1 {arr1};
    int *tmp {nullptr};

    tmp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = tmp;

    cout << "-------------------" << endl;
    cout << "arr0: " << endl;
    for(size_t i{}; i<size(arr0); ++i) {
        cout << p_arr0[i] << " ";
    }
    cout << endl;

    cout << "arr1: " << endl;
    for(size_t i{}; i<size(arr1); ++i) {
        cout << p_arr1[i] << " ";
    }
    cout << endl;
*/
    return 0;
}