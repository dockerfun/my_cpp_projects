#include <iostream>
using namespace std;

int main(){
    
    /* code */
    const int Eraser{10};
    const int Pen{20};
    const int Circle{30};

    int tool{Eraser};
    switch(double strength{3.56};tool)
    {
        case Pen: {
          cout << "Active tool is Pen. Strength: " << strength << endl; 

        }
            break;
        case Circle: {
            cout << "Active tool is Circle. Strength: " << strength << endl; 

        }
            break;
        case Eraser: {
            cout << "Active tool is Eraser. Strength: " << strength << endl; 

        }
            break;
        default:{
            cout << "No match found. Strength: " << strength << endl; 
        }
            break;
    }
    
    return 0;
}