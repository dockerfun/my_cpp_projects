#include <iostream>

class Base{
    private : 
        int m_x;
    protected : 
        int m_y;
    public : 
        int m_z;
        void set_x(int x){m_x = x;}
        int x() const {return m_x;}
};
 
class Derived : public Base{
    private : 
        int m_a;
    protected : 
        int m_b;
    public : 
        int m_c;
        void set_values(int x, int y, int z,int b){
            //m_x = x;//Error
            m_y = y;
            m_a = z;
            m_b = b;
        }
        void print() const{
             std::cout << "B[x :" << x()
                     <<  " y:" << m_y
                    << " z:" << m_z
                    << " a:" << m_a
                    << " b:" << m_b
                    << " c:" << m_c <<"]" << std::endl;
                
        }
};
 
 
int main()
{
    Derived d;
    d.m_c =10;
    d.m_z = 20;
    d.set_values(1,2,3,4);
    d.print();
    return 0;
}