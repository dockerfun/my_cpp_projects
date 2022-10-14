#include "Cylinder.h"

# define M_PI   3.14159265358979323846  /* pi */

double Cylinder::volume(){
    return M_PI * base_radius * height;
}