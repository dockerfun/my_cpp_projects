#include <iostream>
using namespace std;

int*  minimum_address( int data[], unsigned int size){

  int * min_address;

  // Don't modify anything above this line
  //Your code should go below this line
  //REMEMBER !ONLY POINTER ARITHMETIC SHOULD BE USED TO ACCESS ARRAY DATA
  int *p_data {data};
  int *tmp {data};
  
  for (int i{0}; i<size; ++i) {
    cout << "Address: " << &data[i] << ", value: " << data[i] << endl;
  }
  cout << endl;

  for(int i {0}; i<size; ++i) {
       if(*tmp>*(p_data+i)) {
         tmp = p_data+i;
      }
      cout << "*tmp: " << *tmp << ", *(p_data + i): " << *(p_data + i) << endl;
  }

  min_address = tmp;
  cout << "min address: " << min_address << endl;
  
  //Your code should go above this line
  //Don't modify anything below this line

  return min_address;
}

int main(){

    int scores[10]{11,12,13,14,15,16,17,18,19,20};

    //Array index notation 
    //int *pointer1 {&scores[0]};
    //int *pointer2 {&scores[8]};

    int *p1 {scores};
    int *p2 {scores+8};

    cout << "p2-p1: " << p2-p1 << endl;
    cout << "p1-p2: " << p1-p2 << endl;

    //Special type to store pointer differences
    ptrdiff_t pos_diff = p2-p1;
    ptrdiff_t neg_diff = p1-p2;

    cout << "pos diff.: " << pos_diff << endl;
    cout << "neg diff.: " << neg_diff << endl;
    cout << "size of std:ptrdiff_t: " << sizeof(ptrdiff_t) << endl;

    //Find minimum address of an array element
    int data[] {11,2,52,53,9,13,5,7,12,11};

    int *min_element = minimum_address(data, 10);
    return 0;
}