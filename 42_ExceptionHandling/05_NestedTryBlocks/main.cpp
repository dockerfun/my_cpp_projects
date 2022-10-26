#include <iostream>
using namespace std;

void exception_thrower(){
    throw 1;
}

void some_function(){
    for(size_t i{}; i<15; ++i){
        cout << "Iteration : " << i << endl;

        try{//Outer try block

            //Exceptions thrown in this scope are handled in outer catch blocks
            if(i==2) 
                throw "Exception for int 2 thrown"; //const char* exception

            try{ //Inner try block
                if(i==5){
                    throw 'd'; //char, will be handled by inner catch block
                }
                 if(i==7){
                    throw i; //size_t, will be handled by outer catch block
                }
                if(i==8){
                    exception_thrower();
                }
                if(i==9){
                    throw std::string("string thrown for int 9"); //Neither Inner, nor outer catch block can handle this exception
                }
            }catch(char ex){
                cout << "Inner catch(char) block, cought : " << ex << endl;
            }catch(const char* ex){
                cout << "Inner catch(const char*) block, cought : " << ex << endl;
            }catch(size_t ex){
                cout << "Inner catch(size_t) block, cought : " << ex << endl;
            }
        }catch(const char* ex){
            cout << "Outer catch(const char*) block, cought : " << ex << endl;
        }catch(size_t ex){
            cout << "Outer catch(size_t) block, cought: " << ex << endl;
        }catch(int ex){
            cout << "Outer catch(int) block, cought : " << ex << endl;
        }
    }
}

int main(){
    
    /* code */
    try{
        some_function();
    }catch(std::string ex){
        cout << "Main catch block: " << ex << endl;
    }
    cout << "End. " << endl;
    
    return 0;
}
