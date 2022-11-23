#include <iostream>
using namespace std;

int main(){
    
    /* code */
    int positive_number{65234};
    int negative_number{-22};
    double double_var{483.22};

    cout << "positive_number: " << positive_number << endl;
    cout << "negative_number: " << negative_number << endl;

    cout << showpos;
    cout << "positive_number: " << positive_number << endl;
    
    cout << noshowpos;
    cout << "positive_number: " << positive_number << endl;

    // std::dec std::oct and std::hex

    cout << "Positive integer in different bases: " << endl;
    cout << "dec: " << dec << positive_number << endl;
    cout << "oct: " << oct << positive_number << endl;
    cout << "hex: " << hex << positive_number << endl;


    cout << "Negative integer in different bases: " << endl;
    cout << "dec: " << dec << negative_number << endl;
    cout << "oct: " << oct << negative_number << endl;
    cout << "hex: " << hex << negative_number << endl;

    cout << "Double in different bases: " << endl;
    cout << "dec: " << dec << double_var << endl;
    cout << "oct: " << oct << double_var << endl;
    cout << "hex: " << hex << double_var << endl;

    cout << endl;
    cout << showbase;
    cout << "dec: " << dec << positive_number << endl;
    cout << "oct: " << oct << positive_number << endl;
    cout << "hex: " << hex << positive_number << endl;

    //Uppercase
    cout << endl;
    cout << uppercase;
    cout << "dec: " << dec << positive_number << endl;
    cout << "oct: " << oct << positive_number << endl;
    cout << "hex: " << hex << positive_number << endl;   
    
    return 0;
}