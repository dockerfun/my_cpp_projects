#include "Cylinder.h"
#include "constants.h"

double Cylinder::volume(){
    return M_PI * base_radius * height;
}

Cylinder::Cylinder(double height_param){
        base_radius = 1.0;
        height = height_param;
}

Cylinder::Cylinder(double radius_param, double height_param){
        base_radius = radius_param;
        height = height_param;
}

double Cylinder::get_base_radius(){
    return base_radius;
}
double Cylinder::get_height(){
    return height;
}
void Cylinder::set_base_radius(double radius){
    base_radius = radius;
}
void Cylinder::set_height(double m_height){
    height = m_height;
}