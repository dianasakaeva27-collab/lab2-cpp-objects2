#include <iostream>
#include <string>

class Shape {
protected:
    std::string color;

public:
    Shape() : color("black") {
        std::cout << "Shape() constructor" << std::endl;
    }

    Shape(const std::string& c) : color(c) {
        std::cout << "Shape(string) constructor" << std::endl;
    }

    ~Shape() {
        std::cout << "~Shape() destructor" << std::endl;
    }

    void draw() const {
        std::cout << "Drawing a shape of color " << color << std::endl;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle() : Shape(), radius(1) {
        std::cout << "Circle() constructor" << std::endl;
    }

    Circle(const std::string& c, int r) : Shape(c), radius(r) {
        std::cout << "Circle(string,int) constructor" << std::endl;
    }

    ~Circle() {
        std::cout << "~Circle() destructor" << std::endl;
    }

    void draw() const {
        std::cout << "Drawing a CIRCLE of color " << color << " with radius " << radius << std::endl;
    }
};

int main() {
    std::cout << "=== Creating Shape ===" << std::endl;
    Shape s("red");
    s.draw();

    std::cout << "\n=== Creating Circle ===" << std::endl;
    Circle c("blue", 5);
    c.draw();

    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}