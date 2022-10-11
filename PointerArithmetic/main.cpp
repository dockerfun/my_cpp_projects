#include <iostream>
using namespace std;

int main(){

    //navigation
    //incrementing, decrementing a pointer

    int scores[] {1,2,3,4,5,6,7,8};

    int *p_score {scores};

    cout << "scores:" << endl;
    for(size_t i{}; i<size(scores);++i) {
        cout << *(p_score+i) << " ";
    }
    cout << endl;

    cout << "scores: " << endl;
    //another example
    for(size_t i{}; i<size(scores);++i) {
        cout << *(scores+i) << " ";
    }
    cout << endl;

    p_score = scores;
    //Elements in reverse order with decrementing pointer arithmetic 
    cout << "reverse order: " << endl;
    for(size_t i{size(scores)};i>0; --i) {
        cout << *(p_score + i - 1) << " ";
    }
    cout << endl;

    cout << "reverse order with scores: " << endl;
    for(size_t i{size(scores)};i>0; --i) {
        cout << *(scores + i - 1) << " ";
    }
    cout << endl;

    cout << "reverse order with scores: " << endl;
    for(size_t i{size(scores)};i>0; --i) {
        cout << scores[i - 1] << " ";
    }
    cout << endl;

    cout << "increasing order with scores: " << endl;
    for(size_t i{};i<size(scores); ++i) {
        cout << scores[i] << " ";
    }
    cout << endl;

    //Modify elements
    p_score = scores;

    scores[0] = 21;
    *(scores + 1) = 22;
    *(p_score + 2) = 23;
    
    cout << "increasing order with scores: " << endl;
    for(size_t i{};i<size(scores); ++i) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}