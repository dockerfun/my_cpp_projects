#include <iostream>
#include <string>
using namespace std;

int main(){
    
    /* code */
    string s = "AB";
    
    cout << "s.length()-1: " << (s.length()-1) << endl;     // 1
    cout << "s[s.length()-1]: " << s[s.length()-1] << endl; // B
    
    s.append(s).push_back(s[s.length()-1]);
    cout << s;


    
    return 0;
}
