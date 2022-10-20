#include <iostream>
using namespace std;

//assignment
unsigned int digit_sum (unsigned int num){

    unsigned int digit = 0;
    unsigned int inside_num = num;
    unsigned int sum{};

   while(inside_num > 0){
        cout << "inside_num : " << inside_num << endl;
        digit = inside_num % 10;
        cout << "digit : " << digit << endl;
        sum += digit;
        inside_num /= 10;

   }
   return sum;
};

//Function that prints out the odd digits from the least significant to
//the most significant
void show_odds(unsigned long long int num){
    
    unsigned long long int inside_num {num};
    
    while(inside_num>0){
        if((inside_num % 10) %2 != 0){
            std::cout << inside_num % 10;
        }
        inside_num /= 10;
    }
}

//Function declaration - Prototype
int max(int, int);

int inc_multi(int, int);

int min(int, int);

int main(){

    //assignment completed
    //int value = digit_sum(3453);
    //cout << "value is: " << value << endl;

    //Function declaration and definition
    //Separate function header and implementation
    cout << "max : " << max(3,1) << endl;
    cout << "min : " << min(3,1) << endl;

    cout << "inc_multi : " << inc_multi(6,2) << endl;

    cout << endl;
    show_odds(2345);

    return 0;
}

//Function definition - Implementation
int max(int a, int b)
{
    return a > b ? a : b;
}

int inc_multi(int a, int b){
    return ((++a)*(++b));
}

int min(int a, int b){
    unsigned long long int ad {};
    char * odds {};
    return a>b ? b : a;
}