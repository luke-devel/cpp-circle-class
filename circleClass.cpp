// Author : Luke Olson

// This program intakes a radius value either through passing a radius value to an overloaded default constrictor,
// or using the default constructor to cin a user defined value.

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

//***************************************************************************************************
// circleType class is used to create a circle depending on a radius
// and display the Area, Circumference, and Diameter
//
// Public: circleType() default constructor -- sets area, radius, diameter, and circumference to 0.0
//         then asks for user input of new radius value, then displays to the user the circle's
//         Radius, Area, Circumference, and Diameter
//
//         circleType(double radius) overloaded default constructor -- sets area, radius, diameter,
//         and circumference determined by user determined radius value
//
//         setRadius(double radius) to set the radius
//
//    double r -- for radius
//    double c = 0.0 -- for circumference
//    double d = 0.0 -- for diameter
//    const double PI = M_PI; -- set const PI to PI value using <cmath>
//
// getRadius() to return the radius
// returnDiameter() to return diameter, returnCircumference() to return circumference
// returnArea() to return area
//***************************************************************************************************

class circleType
{

public:
    circleType()
    {

        a = 0;
        r = 0;
        d = 0;
        c = 0;

        cout << "\nEnter the radius of a circle: ";
        cin >> r;

        a = returnArea();
        c = returnCircumference();
        d = returnDiameter();

        cout << "Radius : " << getRadius() << ", Area : " << a << ", Circumference : " << c << ", Diameter : " << d;
    }

    circleType(double radius)
    {

        setRadius(radius);
        a = returnArea();
        c = returnCircumference();
        d = returnDiameter();

        cout << "Radius : " << getRadius() << ", Area : " << a << ", Circumference : " << c << ", Diameter : " << d;
    }

    void setRadius(double radius)
    {

        r = radius;
    }

    double getRadius()
    {

        return r;
    }

    double returnDiameter()
    {

        d = r * 2;
        return d;
    }

    double returnCircumference()
    {

        c = 2 * PI * r;
        return c;
    }

    double returnArea()
    {

        double area = PI * pow(r, 2);
        return area;
    }

private:
    double a;
    double r;
    double c;
    double d;
    const double PI = M_PI;
};

int main()
{

    circleType circle1(8);
    circleType circle2;

    return 0;
}
