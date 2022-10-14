#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
    //Member variable can never be references
    double base_radius {1.0};
    double height {1.0};
public:
    Cylinder()=default;
    Cylinder(double height_param){
        base_radius = 1.0;
        height = height_param;
    }
    Cylinder(double radius_param, double height_param){
        base_radius = radius_param;
        height = height_param;
    }
    double volume();
    double get_base_radius(){
        return base_radius;
    }
    double get_height(){
        return height;
    }
    void set_base_radius(double radius){
        base_radius = radius;
    }
    void set_height(double m_height){
        height=m_height;
    }
};

#endif