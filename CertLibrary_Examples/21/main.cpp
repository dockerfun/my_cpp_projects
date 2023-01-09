#include <iostream>
using namespace std;
#include <string>

namespace S1{
    int A=1;
}

namespace S2{
    int A=2;
}

int main(){
    
    /* code */

    /* Task 1 */
    {
        int i = 2;
        float f = 4.4;

        //cout << f % static_cast<float>(i); // Error
    }
    /* Task 2 */
    {
        string s1 = "1";
        string s2 = "12";
        // cout << "Task 2: " << s1.compare(s2);
    }
    /* Task 3 */
    {
        {
            using namespace S1;
            S2::A=A+1;
        }    
        {
            using namespace S2;
            S1::A=A+1;
        }
        // cout << S1::A << S2::A; // 32
    }
    /* Task 4 */
    {
        string s = "a";
        // cout << s + "b" + "c"; // abc
    }
    /* Task 5 */
    {
        int i = 2;
        float f = 5.8;
        f = static_cast<int>(f);
        // cout << "f: " << f << endl;
        i = static_cast<float>(i);
        // cout << "i: " << i << endl;

        // cout << f/i;
    }
    /* Task 6 */
    {
        string s1 = "aleph";
        string s2 = "alpha";
        string s;

        s1.swap(s2); // s1: alpha; s2: aleph
        // s2.swap(s); 
        // s.swap(s2);
        // cout << s2; // aleph
    }
    /* Task 7 */
    {
        string s1="ab";
        string s2="Abc";

        // if(s1 > s2){
        //     cout << "YES";
        // }else{
        //     cout << "NO";
        // }

        // cout << "Taks 7: " << s1.compare(s2);
    }
    /* Task 8 */
    {
        string s1 = "Ab";
        string s2 = "Abc";
        // cout << s1.compare(s1);
    }
    /* Task 9 */
    {
        int i, k=1;
        for(i=0;i<3;i+=2)
            k++;
        cout << k;
    }

    return 0;
}