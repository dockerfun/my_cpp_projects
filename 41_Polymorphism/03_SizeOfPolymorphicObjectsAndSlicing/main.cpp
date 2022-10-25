/**
 * Size of polymorphic objects and slicing
*/
#include <iostream>
#include <string_view>
using namespace std;

//Shape->Oval->Circle
class Shape{
public:
    Shape()=default;
    Shape(std::string_view description)
        : m_description(description){}
    /*virtual*/ void draw() const{
        cout << "draw Shape" << endl;
    }
protected:
    std::string_view m_description {""};
};
class Oval : public Shape{
public:
    Oval()=default;
    Oval(double r1, double r2, std::string_view name)
        : m_r1(r1), m_r2(r2), m_name(name){}
    ~Oval(){}
    /*virtual*/ void draw() const{
        cout << "draw Oval" << endl;
    }
    double get_x_rad(){
        return m_r1;
    }
    double get_y_rad(){
        return m_r2;
    }
protected:
    std::string_view m_name{"Oval"};
    double m_r1{0.0};
    double m_r2{0.0};    
};
class Circle : public Oval{
public:
    Circle()=default;
    Circle(double r, std::string_view name)
        : m_r(r), m_name(name){}
    ~Circle(){}
    /*virtual*/ void draw() const{
        cout << "draw Circle: " << m_name << endl;
    }
protected:
    std::string_view m_name{""};
    double m_r{0.0};
};

void draw_shape_by_ptr(Shape *shape_ptr){
    shape_ptr->draw();
}
void draw_shape_by_ref(const Shape& shape_ref){
    shape_ref.draw();
}

int main(){
    
    /* code */
    {
        cout << "Size of Shape: " << sizeof(Shape) << endl;     // 24
        cout << "Size of Oval: " << sizeof(Oval) << endl;       // 56
        cout << "Size of Circle: " << sizeof(Circle) << endl;   // 80

    }
    {
        /* Object slicing */
        Shape shape1("shape1");
        Oval oval1(2.0, 3.5, "oval1");
        Circle circle1(3.3, "circle1");

        // Slicing
        Shape shape2 = circle1;

        cout << "Size of shape2: " << sizeof(shape2) << endl; // 24
    }
    return 0;
}