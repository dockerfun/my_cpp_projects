#include <iostream>
using namespace std;

class Item{

};

class Animal{
public:
    Animal()=default;
    /*virtual*/ void breathe() const{};
private:
    std::string m_description;
};

class Dog : public Animal{
public:
    Dog()=default;
    /*virtual*/ void breathe() const /*override*/{};
    void run(){
        cout << "Dog is running" << endl;
    }
private:
    std::string m_fur_color;
};

void process_parameters(int par_a, int par_b);

int main(){
    
    /* code */
    /* Integer division by zero : Crash */
    {
        // const int a{1};
        // const int b{0};
        // int result=a/b; //Warning: division by zero
    }

    /* Failing downcast */
    {
        // Animal a;
        // Downcast using dynamic_cast with references
        // The hierarchy of Animal->Dog has to be polymorphic to be able to do this.
        // The following statement throws an exception because animal has no dog "part"
        // so the cast won't work
        // Dog& d{dynamic_cast<Dog&>(a)};

        //proper solution
        Dog d;
        Animal& a{dynamic_cast<Animal&>(d)};
    }

    /* Recovering from integer division by zero */
    {
        //Integer division
        // const int a{2};
        // const int b{0};
        // int result;

        // try{
        //     if(b==0)
        //         throw b;
        //     result=a/b;
        // }catch(int ex){
        //     cout << "Integer division by zero detected" << endl;
        // }
    }

    /* Thrown type must be the same as the catch parameter */
    {
        //Integer division
        // const int a{1};
        // const int b{0};
        // int result;

        // try{
        //     if(b==0){
        //         throw 0;
        //     }
        //     result = a/b;
        // }catch(std::string ex){ //terminate called after throwing an instance of 'int'
        //     cout << "Integer division by zero detected" << endl;
        // }catch(int ex){
        //     //some processing
        // }
    }

    /* Exception thrown in functions */
    {
        // try{
        //     process_parameters(10,0);
        // }catch(const char* ex){
        //     cout << "Exception: " << ex << endl;
        // }
    }
    cout << "End. " << endl;
    
    return 0;
}

/* Function throws const char* exception when par_b is zero */
void process_parameters(int par_a, int par_b){
    //Do some processing

    if(par_b == 0)
        throw "Potential division by 0 detected";

    int result = par_a/par_b;

    //some other processing
}