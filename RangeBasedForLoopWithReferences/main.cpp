#include <iostream>
using namespace std;


int main(){

    int scores[] {1,2,3,4,5,6,7,8,9,10};

    // cout << endl;
    // for(auto score : scores){
    //     score = score * 10; //modify copy of value in scores. It will not change the data in the array.
    //     cout << score << " ";
    // }
    // cout << endl;
    // for(auto score : scores){
    //     cout << score << " ";
    // }
    // cout << endl;

    cout << "Modify using references" << endl;
    //with references
    for (auto& score : scores){
        score = score * 3;
    } 

    for (auto score : scores){
        cout << score << " ";
    }
    cout << endl;
    return 0;
}