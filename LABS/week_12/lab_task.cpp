#include<iostream>
#include<vector>

using namespace std;
// Write a class Circle with a private member radius. Write a friend function to calculate the area of the circle.
class Circle {
private:    double radius;
public:    Circle(double r) : radius(r) {}
    friend double calculateArea(const Circle& c);
};  
double calculateArea(const Circle& c) {
    return 3.14159 * c.radius * c.radius;
}

// Implement a class Rectangle with private members length and width. Write a friend function to calculate the perimeter of the rectangle.
class Rectangle {
private:    double length;
    double width;
public:    Rectangle(double l, double w) : length(l), width(w) {}
    friend double calculatePerimeter(const Rectangle& r);
};
double calculatePerimeter(const Rectangle& r) {
    return 2 * (r.length + r.width);
}

int main() {
    Circle circle(5.0);
    cout << "Area of the circle: " << calculateArea(circle) << endl;

    Rectangle rectangle(4.0, 6.0);
    cout << "Perimeter of the rectangle: " << calculatePerimeter(rectangle) << endl;

    return 0;
}