#include <iostream>
using namespace std;

class Item{

};

int main(){
    
    /* code */
    // int a{10};
    // int b{0};

    // try{
    //     Item item;
    //     if(b==0)
    //         throw 0;
    //     a++;
    //     b++;
    //     cout << "Code that executes when things are fine" << endl;
    // }catch(int ex){ // Pointers may leak memory at this point.
    //     cout << "Something went wrong. Exception thrown : " << ex << endl;
    // }

    /* throwing pointers to locals: BAD! */
    {
        // int c{0};
        // try{
        //     int var{55};
        //     int* int_ptr = &var;
        //     if(c==0)
        //         throw int_ptr;
        //     cout << "Keep doing some other things..." << endl;
        // }catch(int *ex){
        //     cout << "Something went wrong. Exception thrown : " << *ex << endl;
        // }
    }

    /* Pointers in try block: LEAKS! */
    {
        int d{0};
        try{
            Item *item_ptr = new Item();
            if(d==0)
                throw 0;
            cout << "Do something." << endl;
        }catch(int ex){
            cout << "Something went wrong. Exception thrown : " << ex << endl;
        }
    }

    cout << "End. " << endl;
    
    return 0;
}