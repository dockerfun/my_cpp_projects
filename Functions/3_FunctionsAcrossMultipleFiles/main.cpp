#include <iostream>
#include "calculation.h"
#include "assignment.h"

using namespace std;

int main(){
 
    cout << add(3,4) << endl;
    cout << max(3,4) << endl;
    cout << inc_mult(3, 2) << endl;

    cout << endl;
    //assignment
    cout << is_palindrome(212) << endl;
    cout << is_palindrome_solution(212) << endl;
    
    return 0;
}