#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
    //Member variable can never be references
    double base_radius {1.0};
    double height {3.4};
public:
    double volume();
};

#endif