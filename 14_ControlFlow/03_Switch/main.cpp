#include <iostream>
using namespace std;

int main(){
    
    /* code */
    const int Pen{10};
    const int Eraser{20};
    const int Circle{40};

    int tool {Eraser};

    switch (tool)
    {
        case Eraser:
            cout << "Eraser" << endl;
            //break;
        case Circle:
            cout << "Circle" << endl;
            //break;
        case Pen: 
            cout << "Pen" << endl;
            break;
        default:
            cout << "Idk" << endl;
            break;
    }
    
    return 0;
}