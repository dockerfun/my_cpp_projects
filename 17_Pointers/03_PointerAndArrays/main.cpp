#include <iostream>
using namespace std;

int *maximum_address(int data[], unsigned int size)
{
    int *max_address;
    int tmp;
    for(int i = 0; i<size; i++)
    {
        if(data[i]>tmp)
        {
            max_address = &data[i];
            tmp = data[i];
        }
    }

    return max_address;
};

int main(){
    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    int *p_score {scores};

    //Print the address
    cout << "scores : " << scores << endl; //Array
    cout << "p_score : " << p_score << endl; //Pointer
    cout << "Address : " << &scores << endl;
    cout << "Address : " << &scores[0] << endl;

    //Print the content at the address
    cout << endl;
    cout << "Printing out data at array address : " << endl;
    cout << "scores : " << *scores << endl;
    cout << "scores[0] : " << scores[0] << endl;
    cout << "*p_score : " << *p_score << endl;
    cout << "p_score[0] : " << p_score[0] << endl;
    cout << "Value : " << *(&scores[0]) << endl;

    //size() does not work for raw pointers
    cout << "size : " << size(scores) << endl;
    //cout << "size : " << size(p_score) << endl; //Compiler error.

    //Differences
    int number {98};
    //scores = &number; //Array pointer cannot point to somewhere else

    int data[]{1,3,4,6,8,9,11,32,0,2,55,12,5};
    int *max_addr {nullptr};

    max_addr = maximum_address(data, 13);

    cout << "Max address : " << max_addr << endl;
    
    return 0;
}