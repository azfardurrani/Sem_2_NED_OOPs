#include <iostream>
#include <string>
using namespace std;

// Question 1: Basic Inheritance
// Create a base class Vehicle with a method move() that prints "Vehicle is moving". Derive a class Car from Vehicle and override the move() method to print "Car is moving".


// using namespace std;

// class Vehicle {
// public:
//     void move() 
//     {
//         cout << "Vehicle is moving" << endl;
//     }
// };

// class Car : public Vehicle
// {
// public:
//     void move() 
//     {
//         cout << "Car is moving" << endl;
//     }
// };

// int main()
// {
//     Vehicle v;
//     Car c;

//     // v.move(); // Output: Vehicle is moving
//     // c.move(); // Output: Car is moving
// }


// Question 2: Constructor in Derived Class
// Create a base class Person with attributes name and age. Create a derived class Student with an additional attribute studentID. Initialize these attributes using constructors.

// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// protected:
//     string name;
//     int age;
// public:
//     Person(string n, int a)  
//     {
//         name = n;
//         age = a;
//     }
// };

// class Student : public Person {
// private:
//     string studentID;
// public:
//     Student(string n, int a, string id)  : Person(n, a) // Call the base class constructor
//     {
//         studentID = id;
//     }
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
//     }
// };  

// int main() {
//     Student s("Alice", 20, "S12345");
//     s.display(); // Output: Name: Alice, Age: 20, Student ID: S12345
//     return 0;
// }


// Question 3: Method Overriding
// Create a base class Shape with a method draw() that prints "Drawing Shape". Create derived classes Circle and Square that override the draw() method to print "Drawing Circle" and "Drawing Square", respectively.

// #include <iostream>
// using namespace std;

// class Shape {
// public:    
//     void draw() // Make it virtual to allow overriding
//     {
//         cout << "Drawing Shape" << endl;
//     }
// };

// class Circle : public Shape {
// public:    
//     void draw()  // Override the base class method
//     {
//         cout << "Drawing Circle" << endl;
//     }
// };

// class Square : public Shape {
// public:    
//     void draw()  // Override the base class method
//     {
//         cout << "Drawing Square" << endl;
//     }
// };

// int main() {

//     Shape s1;
//     Circle c1;
//     Square sq1;
//     s1.draw(); // Output: Drawing Shape
//     c1.draw(); // Output: Drawing Circle
//     sq1.draw(); // Output: Drawing Square

//     return 0;
// }

// Question 4: Access Specifiers
// Create a base class Base with a private attribute privateVar, a protected attribute protectedVar, and a public attribute publicVar. Create a derived class Derived and demonstrate access to these attributes. Write your observations.

// class Base {
// private:
//     int privateVar;
// protected:
//     int protectedVar;
// public:
//     int publicVar;
// };

// class Derived : public Base {
// public:
//     void accessBaseMembers() {
//         // privateVar = 10; // Error: privateVar is not accessible
//         protectedVar = 20; // Accessible: protectedVar is accessible in derived class
//         publicVar = 30; // Accessible: publicVar is accessible in derived class
//     }
// };

// int main() {
//     Derived d;
//     // d.privateVar = 10; // Error: privateVar is not accessible
//     // d.protectedVar = 20; // Error: protectedVar is not accessible outside the class hierarchy
//     d.publicVar = 30; // Accessible: publicVar is accessible outside the class

//     return 0;
// }

// Question 5
// You are required to create a C++ program that demonstrates the concept of inheritance.Consider the following requirements:

// Base Class - Shape:
// Attributes:
// color (string)
// Constructor that initializes color.
// A pure virtual function area() which will return the area of the shape.
// A virtual function display() that prints the color of the shape.

// Derived Classes:
// Rectangle:
// Attributes:width (double),height (double)
// Constructor that initializes color, width, and height.
// Override area() to calculate and return the area of the rectangle.
// Override display() to print the color, width, height, and area of the rectangle.


// Circle:
// Attributes:
// radius (double)
// Constructor that initializes color and radius.
// Override area() to calculate and return the area of the circle.
// Override display() to print the color, radius, and area of the circle.

// Main Function:
// Create instances of Rectangle and Circle with different attributes.
// Use a pointer to Shape to store the addresses of these instances and call their display() method.

// class Shape {
// protected:
//     string color;
// public:
//     Shape(string c) : color(c) {}
//     double area() 
//     {
//         return 0; // Pure virtual function
//     }
//     void display() 
//     {
//         cout << "Color: " << color << endl;
//     }
// };  

// class Rectangle : public Shape {
// private:
//     double width;
//     double height;
// public:
//     Rectangle(string c, double w, double h) : Shape(c), width(w), height(h) {}
//     double area() 
//     {
//         return width * height;
//     }
//     void display() 
//     {
//         Shape::display(); // Call base class display to print color
//         cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
//     }
// };

// class Circle : public Shape {
// private:
//     double radius;
// public:
//     Circle(string c, double r) : Shape(c), radius(r) {}
//     double area() 
//     {
//         return 3.14159 * radius * radius;
//     }
//     void display() 
//     {
//         Shape::display(); // Call base class display to print color
//         cout << "Radius: " << radius << ", Area: " << area() << endl;
//     }
// };  

// int main() {
//     Rectangle rect("Red", 4, 5);
//     Circle circ("Blue", 3);

//     Shape* shapePtr;
    
//     shapePtr = &rect;
//     shapePtr->display(); // Output: Color: Red, Width: 4, Height
//     shapePtr = &circ;
//     shapePtr->display(); // Output: Color: Blue, Radius: 3, Area

//     return 0;
// }