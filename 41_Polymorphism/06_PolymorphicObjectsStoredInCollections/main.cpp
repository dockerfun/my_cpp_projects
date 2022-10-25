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
    virtual void draw() const{
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
    virtual void draw() const{
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
    virtual void draw() const{
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
    Circle circle1(7.2, "circle1");
    Oval oval1(13.2,2.1, "oval1");
    Circle circle2(1.22, "circle2");
    Oval oval2(5.4, 3.2, "oval2");

    {
        Shape shapes[] {circle1, oval1, circle2, oval2}; //These are just copies!

        for(Shape s:shapes){
            cout << "Inside array, sizeof(shape): " << sizeof(s) << endl;
            //s.draw();
            Shape *shape_ptr=&s;
            shape_ptr->draw();
            cout << endl;
        }
    }

    /* Storing in pointers : Works */
    {
        // Shape *shapes2[] {&circle1, &oval1, &circle2, &oval2}; //These are just copies!
        // //If it was sliced, we will never get the data back...
        
        // for(Shape *shape_ptr:shapes2){
        //     //s.draw();
        //     shape_ptr->draw();
        //     cout << endl;
        // }
    }

    /* Storing in smart pointers: works */
    {
        std::shared_ptr<Shape> shapes4[] {std::make_shared<Circle>(2.1, "Circle4"),
                                          std::make_shared<Oval>(2.2,4.3,"Oval4")};
        for(auto& s : shapes4){
            s->draw();
        }
    }

    return 0;
}