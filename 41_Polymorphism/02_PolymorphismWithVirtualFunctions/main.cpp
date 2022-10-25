/**
 * Polymorphism (dynamic binding) with virtual functions
*/
#include <iostream>
#include <string_view>
using namespace std;

class Shape{
public:
    Shape()=default;
    Shape(std::string_view description)
        : m_description(description){}
    virtual void draw() const{
        cout << "draw Shape" << endl;
    }
protected:
    std::string_view m_description {""};
};

class Circle : public Shape{
public:
    Circle()=default;
    Circle(double r, std::string_view name)
        : m_r(r), m_name(name){}
    ~Circle(){}
    virtual void draw() const{
        cout << "draw Circle: " << m_name << endl;
    }
protected:
    std::string_view m_name{""};
    double m_r{0.0};
};
class Rectangle : public Shape{
public:
    Rectangle()=default;
    Rectangle(std::string_view name) : m_name(name){
    }
    virtual void draw() const{
        cout << "draw Rectangle: " << m_name << endl;
    }
protected:
    std::string_view m_name{""};
};
class Oval : public Shape{
public:
    Oval()=default;
    Oval(double r1, double r2, std::string_view name)
        : m_r1(r1), m_r2(r2), m_name(name){}
    ~Oval(){}
    virtual void draw() const{
        cout << "draw Oval" << endl;
    }
    std::string_view get_name(){
        return m_name;
    }
protected:
    std::string_view m_name{"Oval"};
    double m_r1{0.0};
    double m_r2{0.0};    
};

void draw_shape_by_ptr(Shape *shape_ptr){
    shape_ptr->draw();
}
void draw_shape_by_ref(const Shape& shape_ref){
    shape_ref.draw();
}

int main(){
    
    /* code */
    //Static binding
    {
        // Shape * shape1 = new Circle;
        // Shape * shape2 = new Rectangle;
        // Shape * shape3 = new Oval;

        // Shape &ref1 {*shape1};
        // Shape &ref2 {*shape2};
        // Shape &ref3 {*shape3};

        // /* release the memory */
        // delete shape1;
        // delete shape2;
        // delete shape3;
    }
    {
        // Circle * circle1 = new Circle(7.2, "circle1");
        // Oval * oval1 = new Oval(13.2,5.4,"oval1");
        // Circle *circle2 = new Circle(11.2, "circle2");
        // Oval *oval2 = new Oval(3.1343,1.14,"oval2");
        // Circle *circle3 = new Circle(6.76, "circle3");
        // Oval *oval3 = new Oval(16.2,4.21,"oval3");

        // Shape *shapes[] {circle1, oval1, circle2, oval2, circle3, oval3};

        // for(Shape* shape_ptr:shapes){
        //     cout << "Inside array, sizeof(*shape_ptr): " << sizeof(*shape_ptr) << endl;
        //     shape_ptr->draw();
        //     cout << endl;
        // } 
    }
    {
        // Static binding with base class pointer
        // Shape shape1("shape1");
        // Oval oval1(2.1,3.2,"oval1");
        // Circle circle1(2.2, "circle1");

        // cout << endl;
        // Shape *shape_ptr=&shape1;
        // shape_ptr->draw(); // We would wish for Shape::draw() to be called

        // shape_ptr=&oval1;
        // shape_ptr->draw(); // We would wish for Oval::draw() to be called

        // shape_ptr=&circle1;
        // shape_ptr->draw(); // We would wish for Circle::draw() to be called
    }
    cout << "--------------------" << endl;
    {
        // Static binding with base class reference
        // Shape shape1("shape1");
        // Oval oval1(2.1,3.2,"oval1");
        // Circle circle1(2.2, "circle1");

        // cout << endl;
        // Shape& shape_ref=shape1;
        // shape_ref.draw(); // We would wish for Shape::draw() to be called

        // shape_ref=oval1;
        // shape_ref.draw(); // We would wish for Oval::draw() to be called

        // shape_ref=circle1;
        // shape_ref.draw(); // We would wish for Circle::draw() to be called        
    }
    cout << "----------------------" << endl;
    {
        Shape shape1("shape1");
        Oval oval1(2.1,3.2,"oval1");
        Circle circle1(2.2, "circle1"); 

        cout << "Polymorphism (data binding) with references: " << endl;
        draw_shape_by_ref(shape1);
        draw_shape_by_ref(oval1);
        draw_shape_by_ref(circle1);

        cout << endl;
        cout << "Polymorphism (data binding) with pointers: " << endl;
        draw_shape_by_ptr(&shape1);
        draw_shape_by_ptr(&oval1);
        draw_shape_by_ptr(&circle1);

        cout << endl;
        cout << "No acces to non virtual functions through polymorphism" << endl;
        Shape *shape_ptr=&oval1;
        //shape_ptr->get_name(); // Error
        // Oval *oval_ptr=&oval1; //Working example
        // oval_ptr->get_name();
        shape_ptr->draw(); // virtual method
    }
    {
        Circle * circle1 = new Circle(7.2, "circle1");
        Oval * oval1 = new Oval(13.2,5.4,"oval1");
        Circle *circle2 = new Circle(11.2, "circle2");
        Oval *oval2 = new Oval(3.1343,1.14,"oval2");
        Circle *circle3 = new Circle(6.76, "circle3");
        Oval *oval3 = new Oval(16.2,4.21,"oval3");

        Shape *shapes[] {circle1, oval1, circle2, oval2, circle3, oval3};

        for(Shape* shape_ptr:shapes){
            cout << "Inside array, sizeof(*shape_ptr): " << sizeof(*shape_ptr) << endl;
            shape_ptr->draw();
            cout << endl;
        } 
    }
    return 0;
}