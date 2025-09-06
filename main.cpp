#include <iostream>
#include <cmath>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;

int main() {

    double r, l, w, b, h;
    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;


    Shape* s1 = new Circle("Red", 1, r);
    Shape* s2 = new Rectangle("Blue", 2, l, w);
    Shape* s3 = new Triangle("Green", 3, b, h);

    s1->displayInfo();
    cout << "Area = " << s1->calculateArea() << "\n\n";

    s2->displayInfo();
    cout << "Area = " << s2->calculateArea() << "\n\n";

    s3->displayInfo();
    cout << "Area = " << s3->calculateArea() << "\n\n";

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
