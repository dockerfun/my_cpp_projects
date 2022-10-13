#include <iostream>
using namespace std;

void insertion_sort(int * array, unsigned int size){
    int key, i, j;
    for(i = 1; i<size; ++i) {
        key=array[i];
        j=i-1;
        while(((j>=0) && (array[j]>key))){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}

void print_array(int* arr, unsigned int n) 
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}

	