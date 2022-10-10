#include <iostream>
using namespace std;


int main(){
    const char * predictions [] {
        "a lot of kids running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary."
    };

    cout << "value is: " << predictions << endl;

    bool end { false };
    const int max_length { 15 };

    char name[max_length]{};

    cout << "What is your name?: " << endl;
    cin.getline(name, max_length);

    while(!end){
        cout << name << " ";
        size_t rand_num = static_cast<size_t>((rand() % size(predictions)));
        cout << predictions[rand_num] << endl;

        cout << "Do you want another try? (Y/N): ";
        char go_on;
        cin >> go_on;
        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

    }

    return 0;
}