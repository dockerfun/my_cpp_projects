#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="Wo";
    string s2;
    s2 = s1;
    string s3;
    s3 = s2.append("rldHello");
    cout << s3;
return( 0 );
}