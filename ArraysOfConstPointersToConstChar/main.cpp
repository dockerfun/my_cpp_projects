#include <iostream>
using namespace std;

const char * const students []
{
    "Daniel Gray",
    "Tuna Philbe",
    "The Rock",
    "Kumar Singh",
    "Sam Ali",
    "Dave Mahoro"
};

int main(){

    cout << endl;
    cout << "Printing out the students: " << endl;
    for (const char * student : students)
    {
        /* code */
        cout << student << endl;
    }

    //*students[0] = 'K';

    const char *new_student { "John Doe" };
    //students[0] = new_student; // to prevent this line make students to be const char* const ..
    
    cout << endl;
    cout << "Printing out the students: " << endl;
    for (const char * student : students)
    {
        /* code */
        cout << student << endl;
    }
    return 0;
}