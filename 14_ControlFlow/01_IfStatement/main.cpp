#include <iostream>
using namespace std;


int main(){
    
    /* code */
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};

    /**
     * if green: go
     * if red, yellow: stop
     * if green and police_stop: stop
    */

   if((yellow || red) || (green && police_stop)){
    std::cout << "Stop" << std::endl;
   }else if(green){
    std::cout << "Go" << std::endl;
   }

   if(red){
    cout << "Stop" << endl;
   }
   if(yellow){
    cout << "Slow down" << endl;
   }
   if(green){
    cout << "go" << endl;
   }

    int number1{2};
    int number2{1};

    int result = (number1<number2);
    if(result){
        cout << "less" << endl;
    }else{
        cout << "greater" << endl;
    }

    return 0;
}