#include "Point.h"
#include <iostream>

//Constructs a point object with X, Y, Z properties
//TODO 
Point::Point(){

    x = 0;
    y = 0;
    z = 0;

}

Point::Point(int someX, int someY, int someZ){
    x = someX;
    y = someY;
    z = someZ;

}

//Sets the X, Y, and Z properties of a point Object
void Point::setX(int someX){
    x = someX;
}
void Point::setY(int someY){
    y = someY;
}
void Point::setZ(int someZ){
    z = someZ;
}

//Gets the X, Y, and Z properties from a point Object
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
int Point::getZ(){
    return z;
}

//Returns a cartesian coordinate representation of a point Object
// aka = (x,y,z)
std::string Point::toCord()
{
    std::string coords = "(" + std::to_string(x) + "," +  std::to_string(y) + "," +  std::to_string(z) + ")";
    return coords;
}