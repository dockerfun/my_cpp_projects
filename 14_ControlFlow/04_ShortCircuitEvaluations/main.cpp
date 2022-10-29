/**
 * AND:
 * if one of the operands if "false", the 
 * result is false. 
 * Put operands likely to be false first.
 * 
 * OR:
 * if one of the operands if "true",
 * the result is true
*/
#include <iostream>
using namespace std;

bool house(){
    return true;
}

bool car(){
    return true;
}

bool spouse(){
    return true;
}

int main(){
    
    /* code */
    bool a{true};
    bool b{true};
    bool c{true};
    bool d{false};

    bool p{false};
    bool q{false};
    bool l{false};
    bool m{true};

    //AND
    bool result = a && b && c && d;
    cout << "result: " << result << endl;

    //OR   
    result = p||q||l||m;
    cout << "result: " << std::boolalpha << result << endl;
    
    if(house() && car() && spouse()){
        cout << "I am happy" << endl;
    }else{
        cout << "I am sad" << endl;
    }
    
    return 0;
}