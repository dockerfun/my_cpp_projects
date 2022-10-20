#include <iostream>
using namespace std;

//Function that takes a single parameter and does not give back result
//explicitely

void enter_bar(unsigned int age){
    if(age>18){
        cout << "Your are " << age << " years old." << endl;
    }else
    {
        cout << "Sorry, you are too young for this." << endl;
    }
    return;
}

int max(int a, int b){
    return a > b ? a : b;
}

// int max(int a, int b){
//     return 8;
// }

double increment_multiply(double a, double b)
{
    cout << "Inside function, before increlement : " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    double result = ((++a) * (++b));

    cout << "Inside function, after increment" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return result;
}

//Funcsiont that does not take parameter and returns nothing
void say_hello(){
    cout << "Hello there" << endl;
    return;
}

int lucky_number(){
    return 99;
}

int main(){
    enter_bar(19);

    int x = max(2, 8);

    cout << "Max value (x): " << x << endl;
    cout << "Max value: " << max(43, 2) << endl;

    say_hello();

    int result {};
    result = lucky_number();
    cout << "result : " << result << endl;

    cout << endl;

    double h {3.2};
    double i {1.32};

    double incr_mult_result = increment_multiply(h, i);

    cout << endl;

    cout << "Outside function, after increment" << endl;
    cout << "h : " << h << endl;
    cout << "i : " << i << endl;

    return 0;
} 